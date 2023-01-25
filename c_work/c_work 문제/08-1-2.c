#include <stdio.h>

int main(){
    int i1,i2,total=0;

    printf("두개의 정수를 입력:");
    scanf("%d %d",&i1,&i2);
    
    if(i1>i2)
        total= i1-i2;
    else
        total= i2-i1;
        
    printf("두수의 차:%d",total);
    return 0;
    
}