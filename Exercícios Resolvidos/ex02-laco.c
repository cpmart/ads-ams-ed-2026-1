#include <stdio.h>

int main(){
    int num,i;
    printf("Número: ");
    scanf("%d",&num);
    printf("-------WHILE-------\n");
    i = 1;
    while(i<11){
        printf("%d x %d = %d\n",num, i, num*i);
        i++;    
    }
    printf("-------DO WHILE-------\n");
    i = 1;
    do{
        printf("%d x %d = %d\n",num, i, num*i);
        i++;    
    }while(i<11);
    printf("-------FOR-------\n");
    for(i=1;i<11;i++)
        printf("%d x %d = %d\n",num, i, num*i);
}