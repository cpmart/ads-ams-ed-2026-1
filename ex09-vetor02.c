#include <stdio.h>

int main(){
    const N=5;
    int num[N],i;
    for(i=0; i<N; i++){
        num[i] = i*10;
    }
    for(i=0; i<N; i++){
        printf("%d\n",num[i]);
    }
}