#include<stdio.h>

void ShowData(const int *ptr){
    // int *rptr = ptr;
    printf("%d",*ptr);
    // *rptr=20;
}

int main(){
    //1번 ShowAllData(int*arr) 라는 레퍼런스 Referunce 함수에 의하며 arr의 값이 변경되는 것을 
    //원하지 않기 때문에  ShowAllData(const int*arr) 을 해서 값변경 불가하게 함
    int num=10;
    int *ptr=&num;
    ShowData(ptr);

    printf("%d",num);

    return 0;

}