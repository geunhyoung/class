#include <stdio.h>

int main(){

    int num, i=1;

    printf("양의 정수 한개 입력:\n");
    scanf("%d",&num);

    while(num>=i>0)
    {

        printf("3 x %d = %d\n",i,3*i);
        i++;
    }
    
    return 0;       
}