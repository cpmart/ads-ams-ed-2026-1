#include <stdio.h>

int main(){
    int valor=1, maior, flag=0;
    while (valor!=0)
    {
        printf("Digite o valor (0 para sair): ");
        scanf("%d",&valor);
        if(flag == 0){
            maior = valor;
            flag = 1;
        }
        else if(valor > maior)
            maior = valor; 
    }
    printf("O maior número é: %d\n\n",maior);
}