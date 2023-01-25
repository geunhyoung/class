#include <stdio.h>

void Swap3(int* ptr1 ,int* ptr2,int * ptr3){
    int temp;
    temp= *ptr1;
    *ptr1= *ptr3;
    *ptr3= *ptr2;
    *ptr2 = temp;
}

int main(){
    int arr[3]={1,2,3};

    Swap3(&arr[0],&arr[1],&arr[2]);
    for(int i=0 ; i<3 ; i++){
        printf("%d ",arr[i]);
    }
    
}