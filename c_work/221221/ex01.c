#include <stdio.h>

int main(){

    char str[] = "LOVE";
    int max= str[0];


    printf("str= %s\n",str);
    for( int i=0; i<5; i++){
        printf("str[%d] = %d\n",i,str[i]);
        if(max < str[i])
            max=str[i];
    }
    
    printf("%c\n",max);//%d로 하면 아스키 코드값 출력, 파이썬에선-> print(ord('L'))


    return 0;
}