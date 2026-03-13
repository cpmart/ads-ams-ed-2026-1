#include <stdio.h>

int main()
{
    int idade, op;
    do
    {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade < 0)
            printf("Inválido!\n");
        else if (idade < 12)
            printf("Criança!\n");
        else if (idade < 18)
            printf("Adolescente!\n");
        else if (idade < 60)
            printf("Adulto!\n");
        else
            printf("Idoso!\n");
        
        printf("Deseja continuar (0 - sair)? ");
        scanf("%d", &op);
    } while (op != 0);
}