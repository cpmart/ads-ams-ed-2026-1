#include <stdio.h>

struct Aluno
{
    char nome[10];
    int idade;
    float altura;
};
void imprimirAluno(struct Aluno aluno);
int main()
{
    struct Aluno aluno;
    printf("Nome: ");
    scanf("%s", aluno.nome);
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    printf("Altura: ");
    scanf("%f", &aluno.altura);
    imprimirAluno(aluno);
}

void imprimirAluno(struct Aluno aluno)
{
    printf("Nome..: %s\n", aluno.nome);
    printf("Idade.: %d\n", aluno.idade);
    printf("Altura: %f\n", aluno.altura);
}