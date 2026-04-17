#include <stdio.h>

int main(){
    int a, *pa; //criei o ponteiro pa
    a = 10;
    pa = &a;    //pa recebe o endereço de a
    printf("a: %d\n",a);    
    *pa = 20;   //* acessa o conteúdo do ponteiro
    printf("&a: %p\n",&a);
    printf("pa: %p\n",pa);
    printf("&pa: %p\n",&pa);
    printf("Digite o novo valor de a: ");
    //scanf("%d",pa); 
    scanf("%d",&*pa);
    printf("a: %d\n",a);    
}