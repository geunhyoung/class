#include <stdio.h>

void ex02(){
    int i1=0,i2=0,cur=0,i3;
    int start,end,total=0;
    printf("두개의 정수를 입력하시오(낮은 정수 먼저 입력): ");
    scanf("%d %d",&start,&end);

    for(start=i3;start<=end;start++){
        total+=start;
    }

    printf("%d부터 %d 까지의 총합: %d\n",i3,end,total);
}

void ex03(){
    int input;
    int total = 1;
    printf("구하고 싶은 팩토리얼 정수 입력 :");
    scanf("%d",&input);

    for(;input>0;input=input-1){
        total = total*input;
    }

    printf("total = %d\n ",total);

}
int main(){
    

    ex02();
    ex03();


}