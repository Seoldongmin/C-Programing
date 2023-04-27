#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가

#define SHOW          1
#define NOswer        1
#define Show_Solution 1
#define An

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_9(int solution, int answer)
{
    double zero_back1 = 7.1;
    double zero_back2 = 11.2;
    double ti1 = 0;
    double tf1 = 11.2;
    double vi1 = 0;
    double vf1 = 100;
    double ti2 = 0;
    double tf2 = 0;
    double vi2 = 0;
    double vf2 = 0;
    double answer1 = 3.92;
    double answer2 = 2.48;


    printf("\n\n");
    printf("2-9 \n");
    printf("========================   문제   =============================\n");
    printf("독일에서 생산된 쿠페 승용차의 제로백이 %6.2lf s라고 합니다.\n\n", zero_back1);
    printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
    printf("(b) 어느 전기자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
    printf("=================================================================\n\n\n\n\n");

    if (solution == SHOW)
    {
        printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
        printf("========================   풀이   =============================\n");
        printf("이 문제를 풀기 위해서는 가속도 공식을 사용하여야합니다.\n");
        printf("관련 공식은 가속도 공식 = (Δv / Δt)입니다.\n");
        printf("Δv는 xf(나중 속력)m/s - xi(처음 속력)m/s 이므로\n");
        printf("Δv = %6.2lf m/s - %6.2lf m/s 입니다. \n\n", vf1, vi1);
        printf("Δt는 tf(나중 시간)s - ti(처음 시간)s 이므로.\n");
        printf("Δt = %6.2lf s - %6.2lf s 입니다. \n\n", tf1, ti1);



        printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s^2 으로 단위를 맞춰야 합니다. \n\n");
        printf("1 km = 1000 m 로 *1000 m 을 해주고 h = 3600 s 이므로 /3600 s 으로 해줍니다. \n");
        printf("가속도 a = 100m/s * 1000 m / 3600m/s / 7.10s 입니다. \n", vf1, zero_back1);
        printf("=================================================================\n\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("관련 공식 (vf - vi)km/h / (tf - ti)s Δx에 대입하면");
        printf("(100 m/s * 1000m / 3600m/s / 7.10s) 입니다.\n\n", vf1, zero_back1);
        printf("따라서 이 자동차의 가속도(a)는 %6.2lf m/s^2 입니다.\n", answer1);
        printf("=================================================================\n\n\n\n\n");
    }



    if (solution == SHOW)
    {
        tf2 = zero_back2;
        printf("(b) 어느 전기자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
        printf("========================   풀이   =============================\n");
        printf("이 문제를 풀기 위해서는 가속도 공식을 사용하여야합니다.\n");
        printf("관련 공식은 가속도 공식 = (Δv / Δt)입니다.\n");
        printf("Δv는 xf(나중 속력)m/s - xi(처음 속력)m/s 이므로\n");
        printf("Δv = %6.2lf m/s - %6.2lf m/s 입니다. \n\n", vf2, vi2);
        printf("Δt는 tf(나중 시간)s - ti(처음 시간)s 이므로\n");
        printf("Δv = %6.2lf s - %6.2lf s 입니다. \n\n", tf2, ti2);



        printf("(a)문제와 똑같이 해답인 가속도를 구하기 위해서는 km/h 를 m/s^2 으로 단위를 맞춰야 합니다. \n\n");
        printf("1 km = 1000 m 로 *1000 m 을 해주고 h = 3600 s 이므로 /3600 s 을 해줍니다. \n");
        printf("그러므로 공식의 풀이는 100 m/s * 1000 / 3600m/s / 11.2s 입니다. \n", vf2, zero_back2);
        printf("=================================================================\n\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("관련 공식 (vf - vi)km/h / (tf - ti)s Δx에 대입하면");
        printf("(100 m/s * 1000 m / 3600m/s / 11.2s) 입니다.\n\n", vf2, zero_back2);
        printf("따라서 이 자동차의 가속도(b)는 %6.2lfm/s^2 입니다.\n\n", answer2);
        printf("=================================================================\n");
    }
}
int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_2_9(1, 1);

}