#include <stdio.h>

int main(){
    int i1=0,i2=0,cur=0,i3;
    int start,end,total=0;
    printf("두개의 정수를 입력하시오(낮은 정수 먼저 입력): ");
    scanf("%d %d",&start,&end);

    for(start=i3;start<=end;start++){
        total+=start;
    }

    printf("%d부터 %d 까지의 총합: %d",i3,end,total);
    return 0;
}