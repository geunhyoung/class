#include <stdio.h>

int SquareByValue(int num){
    return num*=num;
}

void SquareByReference(int*ptr){
    int num= *ptr;

    *ptr = num * num;
    
}
int main(){

    int num=3;
    int*ptr= &num;
    

    printf("Value: %d\n",SquareByValue(num));

    SquareByReference(ptr);
    printf("Referrence: %d\n",num);



    return 0;
}