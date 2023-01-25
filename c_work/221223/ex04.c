#include<stdio.h>

int main(){
    //아스키코드, 배열

    //이름을 입력받고, 이름에 있는 철자르 순서대로 출력
    //1.이름 입력받기
    char name[20];
    printf("이름을 입력해주세요");
    scanf("%c",&name);

    //2.배열 생성 
    /*
    배열값이 0 이면 "이 철자가 나타나지 않음"
    배열값이 1이상이면 "이 철자가 나타나지 않음"
    */
   int count [26]={0};
   //ex)count[0]의 배열값이 0이라면 -> 'A'가 나타나지 않음
   //ex)count[2]의 배열값이 2라면 -> 'c'가 나타나지 않음


    //3.name 탐색
    
    for(int i =0 ; sizeof(name)/sizeof(char);i++){
        //소문자만 입력받는다고 가정하였을 때
        count[name[i]-'a']++;

        //입력값이 LeeYuna가정할 때
        //name[6]=a, count['a'-'a']++ ->count[0]++
        //name[1]=e, count['e'-'a']++-> count[4]++

    }
    printf("나타나는 알파벳은 아래와 같습니다.\n");
    for(int i=0; i<26;){
        if(count[i]>0){
            printf("%c : %d\n",i+'a',count[i]);
        }
    }
    printf("\n");
}
