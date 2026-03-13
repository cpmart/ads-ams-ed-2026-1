#include <stdio.h>

void printQualquerCoisa(void);
void printNumero(int numero);

int main(){
    int num = 19;
    printQualquerCoisa();
    printNumero(num);
    printf("Num: %d\n",num);
    return 0;
}

void printNumero(int numero){
    numero *= 2;
    printf("Número: %d\n",numero);
}

void printQualquerCoisa(void){
        printf("Olá mundo 0 !!!\n");
        printf("Olá mundo 1 !!!\n");
        printf("Olá mundo 2 !!!\n");
}
