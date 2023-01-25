#include <stdio.h>

int main(){
    int num,i=9;

    printf("구구단 몇 단을 출력할 것인가(역순):");
    scanf("%d",&num);

    while(i>0){
        printf("%d x %d = %d\n",num, i, num*i);
        i--;

    }

    return 0;

}