#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

void maiorValor(int matriz[][C], int vetorRetorno[]);
int main(){
    int matriz[L][C], vetorRetorno[3];
    srand(time(NULL));
    //Preencher a matriz
    for(int i=0; i<L; i++)
        for(int j=0; j<C; j++)
            matriz[i][j]=rand()%21;
    //Mostrar a matriz
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++)
            printf("%3d ",matriz[i][j]);
        printf("\n");
    }
    maiorValor(matriz, vetorRetorno);
    printf("Maior: %d - posição: [%d][%d]\n", vetorRetorno[0],vetorRetorno[1], vetorRetorno[2]);
    printf("\n\n");
}

void maiorValor(int matriz[][C], int vetorRetorno[]){
    vetorRetorno[0] = matriz[0][0];
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            if (matriz[i][j] > vetorRetorno[0]){
                vetorRetorno[0]=matriz[i][j];              
                vetorRetorno[1]=i;
                vetorRetorno[2]=j;
            }
        }
    }
}