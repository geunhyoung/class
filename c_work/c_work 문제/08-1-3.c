#include <stdio.h>

int main(){
    int a,b,c,total=0;

    printf("국어 영어 수학 의 점수를 각각 입력하시오:");
    scanf("%d %d %d",&a,&b,&c);

    total= (a+b+c)/3;

    if(total>=90)
        printf("학점:A");
        
    else if(total>=80)
        printf("학점:B");
        
    else if(total>=70)
        printf("학점:C");
        
    else if(total>=50)
        printf("학점:D");
        
    else
        printf("학점:F");
}