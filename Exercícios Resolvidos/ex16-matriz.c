#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

int main(){
    int matriz[L][C], somaLinha, somaColuna;
    srand(time(NULL));
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            matriz[i][j] = rand()%11;
        }
    }
    printf("\n\n");
    for (int i = 0; i < L; i++){
        somaLinha = 0;
        for (int j = 0; j < C; j++){
            somaLinha += matriz[i][j];
            printf("%2d ",matriz[i][j]);
        }
        printf(" = %3d\n",somaLinha);
    }
    printf("--------------\n");
    for (int i = 0; i < C; i++){
        somaColuna = 0;
        for (int j = 0; j < L; j++){
            somaColuna += matriz[j][i];
        }
        printf("%2d ",somaColuna);
    }
    printf("\n\n");
}