#include <stdio.h>


void whoareyou(char *test){
    printf("=======whoareyou=======\n");
    printf("%d\n",test);
    printf("%s\n",test);
    printf("=======whoareyou=======\n");
}
void main(){

    char str1[] = "My String";
    char *str2 = "My String";

    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    str1[0] = 'x';
    //str2[0] = 'x';


    //%s 라는 서식문자는 str1 0번째 배열에서 \0 널문자 까지 출력
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    printf("&str1[0] %d\n",&str1[0]);
    printf("str2 %d\n",str2);
    whoareyou(str1);
}