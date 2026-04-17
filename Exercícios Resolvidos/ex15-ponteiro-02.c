#include <stdio.h>
int preencherValor(int *pvalor);
int main(){
    int valor = 10;
    preencherValor(&valor);
    printf("Valor: %d\n",valor);
}
int preencherValor(int *pvalor){
    *pvalor = 100;
}