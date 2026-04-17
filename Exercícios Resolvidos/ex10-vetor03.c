#include <stdio.h>

int main() {
    int v[10] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    int posicao = 2;
    int novo = 99;

    for (int i = tamanho; i > posicao; i--) {
        v[i] = v[i - 1];
    }

    v[posicao] = novo;
    tamanho++;

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}