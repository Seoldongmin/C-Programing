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
    double ti = 0.0;
    double vi = 0.0;
    double vf = 100.0;
    double answer1 = 0.0;
    double answer2 = 0.0;
    double vf_m_s = 0.0;
    




    printf("\n\n");
    printf("2-9 \n");
    printf("독일에서 생산된 쿠페 승용차의 제로백이 %6.2lf s라고 합니다.\n", zero_back1);
    printf("(제로백은 멈춘 상태에서 출발하여 속도가 %6.2lf km/h에 도달하는 데 걸리는 시간을 말한다.)\n\n", vf);
    printf("(a) 이 자동차의 가속도는 몇 m/s^2 인가?\n\n");

    vf_m_s = vf * 1000 / 3600;
    
    if (solution == SHOW)
    {
        printf("=========================    풀 이   ============================\n");
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
        printf("v:나중속도, v0:처음속도, a:가속도, Δx :거리변화량 입니다.\n");
        printf("1 km = 1000 m 로 * 1000 m 을 해주고 h = 3600 s 이므로 / 3600 s 으로 해줍니다.\n");
        printf("Δv는 vf(나중 속력)m/s - vi(처음 속력)m/s 이므로 Δv = (%6.2lf km/h * 1000 / 3600) - %6.2lf m/s 입니다. \n", vf, vi);
        printf("Δt는 tf(나중 시간)s - ti(처음 시간)s 이므로. Δt = %6.2lf s - %6.2lf s 입니다. \n", zero_back1, ti);
        printf("관련 공식  v^2 - v0^2 = 2 * a * Δx에 대입하면 가속도 a 를 구할 수 있습니다.\n\n\n");
    }

    if (answer == SHOW)
    {
        answer1 = vf_m_s / zero_back1;
        printf("=========================   정 답   =============================\n");
        printf("이 자동차의 가속도(a)는 %6.2lf m/s^2 입니다.\n", answer1);
        printf("\n\n\n");
    }

    printf("(b) 어느 전기자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2 인가?\n\n\n", zero_back2);

    if (solution == SHOW)
    {
        printf("=========================    풀 이   ============================\n");
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
        printf("v:나중속도, v0:처음속도, a:가속도, Δx :거리변화량 입니다.\n");
        printf("1 km = 1000 m 로 * 1000 m 을 해주고 h = 3600 s 이므로 / 3600 s 을 해줍니다. \n");
        printf("Δv는 vf(나중 속력)m/s - vi(처음 속력)m/s 이므로 Δv = (%6.2lf km/h * 1000 / 3600) - %6.2lf m/s 입니다.\n", vf, vi);
        printf("Δt는 tf(나중 시간)s - ti(처음 시간)s 이므로 Δt = %6.2lf s - %6.2lf s 입니다. \n\n", zero_back2, ti);
        printf("관련 공식  v^2 - v0^2 = 2 * a * Δx에 대입하면 가속도 a 를 구할 수 있습니다.\n\n\n");
    }

    vf_m_s = vf * 1000 / 3600;

    if (answer == SHOW)
    {
        answer2 = vf_m_s / zero_back2;
        printf("=========================   정 답   =============================\n");
        printf("이 자동차의 가속도(a)는 %6.2lf m/s^2 입니다.\n", answer2);
        printf("\n\n\n");
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