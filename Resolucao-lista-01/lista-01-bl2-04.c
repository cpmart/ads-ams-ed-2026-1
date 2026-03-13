/*4) Quantos positivos?
Leia 5 números.
Conte:
quantos são positivos
quantos são negativos
quantos são zero*/
#include <stdio.h>

int main(){
    int numero, i, qtd_pos=0, qtd_neg=0, qtd_zero=0;;
    i = 0;
    while(i<5){
        printf("Número: ");
        scanf("%d",&numero);
        if(numero>0)
            qtd_pos++;
        else if(numero<0)
            qtd_neg++;
        else
            qtd_zero++;
            i++;
    }
    printf("Quantidade de positivos: %d\n",qtd_pos);
    printf("Quantidade de negativos: %d\n",qtd_neg);
    printf("Quantidade de zeros    : %d\n",qtd_zero);

}