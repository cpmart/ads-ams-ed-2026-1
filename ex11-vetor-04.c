#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int preencherVetor(int vet[]);
int mostrarVetor(int vet[]);
int maiorValor(int vet[]);
int menorValor(int vet[]);
float calcularMedia(int vet[]);
int calcularQtdPar(int vet[]);
int calcularQtdImpar(int vet[]);

int main(){
    int vet[N];
    preencherVetor(vet);
    mostrarVetor(vet);
    printf("Maior: %d\n",maiorValor(vet));    
    printf("Menor: %d\n",menorValor(vet));    
    printf("Média: %g\n",calcularMedia(vet));    
    printf("Qtd de pares: %d\n",calcularQtdPar(vet));    
    printf("Qtd de ímpares: %d\n",calcularQtdImpar(vet));    
}

int preencherVetor(int vet[]){
    srand(time(NULL));
    for(int i=0; i<N; i++)
    vet[i]=rand()%11;
}

int mostrarVetor(int vet[]){
    for(int i=0; i<N; i++)
    printf("%d\n",vet[i]);
}

int maiorValor(int vet[]){
    int maior = vet[0];
    for (int i = 1; i < N; i++){
        if (vet[i]>maior)
        maior = vet[i];
    }
    return maior;
}

int menorValor(int vet[]){
    int menor = vet[0];
    for (int i = 1; i < N; i++){
        if (vet[i]<menor)
        menor = vet[i];
    }
    return menor;
}

float calcularMedia(int vet[]){
    int total = 0;
    for (int i = 0; i < N; i++)
        total += vet[i];
    return (float)total/N;
}

int calcularQtdPar(int vet[]){
    int total = 0;
    for (int i = 0; i < N; i++)
        if(vet[i]%2==0)
            total++;
    return total;   
}

int calcularQtdImpar(int vet[]){
    int total = 0;
    for (int i = 0; i < N; i++)
        if(vet[i]%2)
            total++;
    return total;   
}