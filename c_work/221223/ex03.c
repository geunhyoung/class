#include <stdio.h>
int ask(char a){
    printf("%c의 아스키 코드:%d",a,a);
}
int main(){
    int n = 65;
    printf("숫자로는 %d\n",n);
    printf("문자로는 %c\n",n); 
    //대문자 A 아스키코드 65

    char ch ='a';
    printf("숫자로는 %d\n",ch);
    printf("문자로는 %c\n\n",ch); 
    //소문자 a 아스키코드 97

    ch= '0';
    printf("숫자로는 %d\n",ch);
    printf("문자로는 %c\n",ch); 
    //문자 0은 아스키코드 48
    ask('d');
    //문자형 하나를 입력받고 
    //이를 아스키코드로 변환하여 출력하는 코드작성
    char c;
    printf("문자를 입력해주세요");
    scanf("%c",&c);
    printf("아스키코드 값: %d\n",c);
}
