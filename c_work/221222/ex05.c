#include<stdio.h>

int main(){
    //백준 사이트 2442번 
    int n;
    scanf("%d",&n);
    //2.이중 반복문 설계
    for (int i = 1; i <= n; i++ ){//행 조절

        for(int j =1; j<= i; j++){//열 조절
            printf("*");

        }
        printf("\n");
    }
    //배열 ->1차원 배열 , 다차원 배열 (2차원)
    //1차원 배열:: 정수들을 입력받고  최대 처ㅣ서 추려내기
    // 1. 배열 선언 5개  아직 값을 별도로 안넣은상태 쓰레기값이 들어있음
    int score[5];

    printf("점수를 입력해주세요.\n");
    for(int i = 0; i< 5; i++){
        scanf("%d",&score[i]);
    }

    //3.최대 최소값 추려내기
    int max ,min=score[0];
    for(int i=0; i<5 ;i++){
        if(max<score[i]){max= score[i];}
        if(min>score[i]){min= score[i];}
    }

    printf("최고:%d 최저%d",max,min);
}