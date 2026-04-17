#include <stdio.h>

int main(){
    int vetor[3]={22,33,44};
    vetor[0]=100;
    vetor[1]=1000;
    vetor[2]=10000;
    scanf("%d",&vetor[0]);
    scanf("%d",&vetor[1]);
    scanf("%d",&vetor[2]);
    printf("%d\n",vetor[0]);
    printf("%d\n",vetor[1]);
    printf("%d\n",vetor[2]);
}