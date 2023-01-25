/*
    call by reference
    call by balue
*/

#include <stdio.h>
//call by value
void whovalue(int value){
    value=20;
    printf("value= %d\n",value);
    
}
// call by reference
void whoref(int *reference){
    *reference=20;
    printf("*reference = %d\n",*reference);

}

void main(){
    int a =10;
    printf("%d\n",&a);
    printf("a = %d\n",a);
    whovalue(a);
    printf("a=%d\n",a);
    whoref(&a);
    printf("%d\n",&a);
    printf("a = %d\n",a);

}