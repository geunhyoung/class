#include <stdio.h>

int doA(){
    printf("doA함수\n");
    return 1;
}
void doB(){//void 비어있다  즉 아무것도 안가지고 옴
    printf("doB함수\n");
}
int doC(int a,int b){
    printf("doC함수\n");
    return a+b;
}

int main(){
    int ma = doA();//프린트 출력, =1
    doB();
    int mb =doC(10,20);

    printf("ma= %d\n",ma);
    printf("mb= %d\n",mb);
    return 0;
}