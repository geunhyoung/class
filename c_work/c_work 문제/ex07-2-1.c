#include <stdio.h>

int main(){

    int input=0,num=0,total=0,i=1;

    while(i<=5){

    

        printf("총 다섯개의 정수를 입력:");
        scanf("%d",&input);

        while(input<1){
            printf("1이상의 정수로 다시 입력하시오:");
            scanf("%d",&input);
        }

        total+=input;
        i++;

    }
    printf("총 합:%d",total);

    return 0;

}