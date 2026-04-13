import re
from itertools import product
from sympy import symbols
from sympy.logic.boolalg import And, Or, Not, simplify_logic


# -------------------------------
# EXTRAÇÃO DE VARIÁVEIS
# -------------------------------
def extrair_variaveis(exprs):
    vars_encontradas = set()
    for expr in exprs:
        vars_encontradas.update(re.findall(r'[A-Za-z]+\d*', expr))
    return sorted(vars_encontradas)


# -------------------------------
# PARSER
# -------------------------------
def parse_produto(termo, mapa):
    fatores = []
    i = 0

    while i < len(termo):
        neg = False
        if termo[i] == '/':
            neg = True
            i += 1

        m = re.match(r'[A-Za-z]+\d*', termo[i:])
        nome = m.group(0)
        simb = mapa[nome]

        fatores.append(Not(simb) if neg else simb)
        i += len(nome)

    return And(*fatores) if len(fatores) > 1 else fatores[0]


def parse_expr(expr, mapa):
    termos = [t.strip() for t in expr.split('+')]
    partes = [parse_produto(t, mapa) for t in termos]
    return Or(*partes) if len(partes) > 1 else partes[0]


# -------------------------------
# CONVERSÃO PARA TEXTO
# -------------------------------
def to_text(expr):
    if expr.func == Not:
        return "/" + to_text(expr.args[0])
    if expr.func == And:
        return " * ".join(to_text(a) for a in expr.args)
    if expr.func == Or:
        return " + ".join(to_text(a) for a in expr.args)
    if expr:
        return "1"
    if expr == False:
        return "0"
    return str(expr)


# -------------------------------
# EXPANSÃO (forma legível)
# -------------------------------
def expandir(expr_original):
    termos = expr_original.split('+')
    novos = []

    for termo in termos:
        termo = termo.strip()
        i = 0
        fatores = []

        while i < len(termo):
            neg = False
            if termo[i] == '/':
                neg = True
                i += 1

            m = re.match(r'[A-Za-z]+\d*', termo[i:])
            nome = m.group(0)

            if neg:
                fatores.append(f"/{nome}")
            else:
                fatores.append(nome)

            i += len(nome)

        novos.append(" * ".join(fatores))

    return " + ".join(novos)


# -------------------------------
# TABELA VERDADE
# -------------------------------
def gerar_tabela(vars_nomes, funcoes):
    print("\nTABELA VERDADE:")
    print("-" * 60)

    cabecalho = vars_nomes + list(funcoes.keys())
    print(" | ".join(cabecalho))
    print("-" * 60)

    for valores in product([0, 1], repeat=len(vars_nomes)):
        contexto = dict(zip(vars_nomes, valores))

        linha = list(map(str, valores))

        for nome, expr in funcoes.items():
            val = int(bool(expr.subs(contexto)))
            linha.append(str(val))

        print(" | ".join(linha))


# -------------------------------
# MAIN
# -------------------------------
def main():
    print("=" * 60)
    print("SIMPLIFICADOR COMPLETO (tipo Simple Solver)")
    print("=" * 60)
    print("Cole várias equações. Enter vazio para finalizar.\n")

    entradas = []

    while True:
        linha = input()
        if linha.strip() == "":
            break
        entradas.append(linha.strip())

    if not entradas:
        print("Nenhuma entrada fornecida.")
        return

    # separar nomes e expressões
    nomes = []
    exprs = []

    for linha in entradas:
        nome, expr = linha.split('=')
        nomes.append(nome.strip())
        exprs.append(expr.strip().replace(" ", ""))

    # variáveis globais
    vars_nomes = extrair_variaveis(exprs)
    simbolos = symbols(" ".join(vars_nomes))
    mapa = dict(zip(vars_nomes, simbolos))

    funcoes = {}

    print("\nRESULTADOS:")
    print("=" * 60)

    for nome, expr in zip(nomes, exprs):
        expr_bool = parse_expr(expr, mapa)
        simplificada = simplify_logic(expr_bool, form='dnf')

        funcoes[nome] = simplificada

        print(f"\n{nome}:")
        print(f"Original     : {expr}")
        print(f"Expandida    : {expandir(expr)}")
        print(f"Simplificada : {to_text(simplificada)}")

    gerar_tabela(vars_nomes, funcoes)


if __name__ == "__main__":
    main()