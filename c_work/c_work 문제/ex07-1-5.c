#include <stdio.h>

int main(){
    int num,input,total=0,i=0;

    printf("입력한 정수의 평균을 출력합니다.\n먼저, 몇개의 정수를 입력하실 겁니까:");
    scanf("%d",&num);

    while(i<num){
        printf("정수를 입력하시오:");
        scanf("%d",&input);
        total+=input;
        i++;

    }

    printf("평균값:%f",(double)total/i);

    return 0;


}