#include <stdio.h>
/*반지름을 입력받아 원 넓이를 출력하는 프로그램을 작성해보자
*/

int main(){

    double rad = 0.0;
    printf("반지름 입력?");
    scanf("%lf",&rad); //scanf 에선  %f를 %lf 로

    printf("%.2f * %.2f * 3.14 = %.2f",rad,rad, (rad * rad * 3.14));


    return 0;
}