#include <stdio.h>

int main()
{
    int idade, nPessoas = 0, maisIdosa = 0, qHomensAltos = 0, totalIdadeHomens = 0, qHomens = 0, flagHomemMaisBaixo = 0, flagMulherMaisVelha = 0;
    float altura, homemMaisBaixo;
    char sexo;
    while (nPessoas < 5)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Sexo: ");
        scanf(" %c", &sexo);
        if (sexo == 'F' || sexo == 'f')
        {
            if (flagMulherMaisVelha == 0)
            {
                maisIdosa = idade;
                flagMulherMaisVelha = 1;
            }
            else if (idade > maisIdosa)
            {
                maisIdosa = idade;
            }
        }
        else if (sexo == 'M' || sexo == 'm')
        {
            if (altura >= 2)
            {
                qHomensAltos++;
            }
            if (flagHomemMaisBaixo == 0)
            {
                homemMaisBaixo = altura;
                flagHomemMaisBaixo = 1;
            }
            else if (altura < homemMaisBaixo)
            {
                homemMaisBaixo = altura;
            }
            totalIdadeHomens += idade;
            qHomens++;
        }
        nPessoas++;
    }
    printf("Idade da pessoa mais velha do sexo feminino: %d\n", maisIdosa);
    printf("Quantidade de homens com altura maior ou igual a 2 metros: %d\n", qHomensAltos);
    printf("Média de idade dos homens: %.2f\n", (float)totalIdadeHomens / qHomens);
    printf("Altura do homem mais baixo: %.2f\n", homemMaisBaixo);
}