#include <stdio.h>

int main(){
    int num1,num2,result;
    int opt;

    while(1){

        printf("무슨 연산 할래 1.(+) 2.(-) 3.(*) 4.(/) ");
        scanf(" %c",&opt);

        printf("opt == %c",opt);
        printf("opt == %d\n",opt);

        printf("첫번째 수 입력");
        scanf("%d",&num1);

        printf("두번째 수 입력");
        scanf("%d",&num2);

        if(opt==43/*'+'*/){
            printf("%d + %d = %d",num1,num2,num1+num2);

        }

        if(opt=='-'){
            printf("%d + %d = %d",num1,num2,num1-num2);
        }
        if(opt==42){
            printf("%d + %d = %d",num1,num2,num1*num2);
        }
        if(opt=='/'){
            printf("%d + %d = %d",num1,num2,num1/num2);
        }
        printf("\n");
    }
}