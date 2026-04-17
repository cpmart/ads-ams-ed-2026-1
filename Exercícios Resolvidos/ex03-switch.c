#include <stdio.h>

int main()
{
    float v1, v2;
    char op;
    printf("Expressão: ");
    scanf("%f%c%f", &v1, &op, &v2);
    switch (op)
    {
    case '+':
    {
        printf("Total: %g\n", v1 + v2);
        break;
    }
    case '-':
    {
        printf("Total: %g\n", v1 - v2);
        break;
    }
    case '*':
    {
        printf("Total: %g\n", v1 * v2);
        break;
    }
    case '/':
    {
        printf("Total: %g\n", v1 / v2);
        break;
    }
    default:
        printf("Opção inválida!\n");
    }
}