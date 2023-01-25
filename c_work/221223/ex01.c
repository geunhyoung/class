#include <stdio.h>
//함수:: 특정 기능을 하는 명령어들의 집합 
// //함수의 기본형
// 반환형 함수명(매개변수타입 매개변수명,...){
//     명령문들..
// }
int sum(int n1,int n2){
    printf("덧셈을 수행합니다.\n");
    return n1+n2;
}

int main(){
    //2개의 정수를 입력받고, 합을 출력
    int a,b;

    scanf("%d %d",&a,&b);

    //출력하는 첫번째 방법
    printf("덧셈결과: %d\n",sum(a,b));

    //두번째 방법(변수를 생성하는 출력)
    int s = sum(a,b);
    printf("덧셈 결과는 %d\n",s);
}