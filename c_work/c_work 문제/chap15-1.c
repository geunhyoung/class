#include<stdio.h>

int add(int *ptr,int len){

    printf("홀수: ");
    for(int i=0; i<len;i++){
        if(*(ptr+i)%2 !=0){
            printf("%d ",*(ptr+i));
        }
    }
    
}
int even(int *ptr,int len){
    int num;

    printf("짝수: ");
    for(int i=0; i<len;i++){
        num= *(ptr+i);
        if(num%2 ==0){
            printf("%d ",num);
        }
    }
    
}
int main(){
    int arr[10];
    int *ptr=arr;
    int len = sizeof(arr)/sizeof(int);

    for(int i=0 ; i< len ; i++){
        printf("정수를 입력하시오: ");
        scanf("%d",arr+i);
    }
    
    add(ptr,len);
    printf("\n");
    even(ptr,len);
        
    
}