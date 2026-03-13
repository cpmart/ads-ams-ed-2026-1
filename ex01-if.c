#include <stdio.h>

int main(){
    float temperatura;
    printf("Informe a temperatura: ");
    scanf("%f",&temperatura);
    if(temperatura < 20) 
        printf("Está frio!!!\n\n");
    else if(temperatura <=30)
        printf("Está agradável!!!\n\n");
    else 
        printf("Está muito quente!!!\n\n");
}