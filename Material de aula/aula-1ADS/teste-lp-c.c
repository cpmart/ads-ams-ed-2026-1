#include <stdio.h>

int main(){
    long int total=0;
    for(int i=0;i<1000000000;i++){
        total+=i;
    }
    printf("Total = %ld\n",total);
}