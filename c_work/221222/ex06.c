#include<stdio.h>
int main(){
    //백준 5597번
    int cnt[31]={0};//크기가 31인 배열선언(반드시 전부 0으로 초기화)

    printf("출석을 위해서 출선 번호를 입력:(1~30번)(입력종료 하려면 100입력)\n");
    
    for(int i=0; i<28 ; i++){
        int num;
        scanf("%d",&num);

        cnt[num]++;//배열값 1을 추가

    }
    for(int i=1; i<=30 ; i++){
        if(cnt[i]==0){
            printf("미제출 학생: %d\n",i);
        }
    }

}