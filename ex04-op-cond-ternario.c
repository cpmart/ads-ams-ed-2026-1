#include <stdio.h>

int main(){
    int valor1, valor2;
    valor1 = 10;
    valor2 = 20;
/*    if(valor1 > valor2)
        printf("Maior: %d\n",valor1);
    else
        printf("Maior: %d\n",valor2);*/
    printf("Maior: %d\n",valor1 > valor2 ? valor1 : valor2);
}