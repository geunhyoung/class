#include <stdio.h>

int factorial(int n){

    if(n==0)
        return 1;
    else
        return n * factorial(n-1);
        /* 잘 안쓰는 펙토리얼
    factorial(4)
    4 * factorial(3)
    '
    '
    4*3*2*1*factorial(0)
*/
}


int main(){
    printf("4! = %d",factorial(4));
}