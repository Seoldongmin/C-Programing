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
    double ti = 0;
    double vi = 0;
    double vf = 100;
    double answer1;
    double answer2;
    double vf_m_s;




    printf("\n\n");
    printf("2-9 \n");
    printf("독일에서 생산된 쿠페 승용차의 제로백이 %6.2lf s라고 합니다.\n", zero_back1);
    printf("(제로백은 멈춘 상태에서 출발하여 속도가 100 km/h에 도달하는 데 걸리는 시간을 말한다.)\n");
    printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");

    if (solution == SHOW)
    {
        printf("========================   풀이   =============================\n");
        printf("이 문제를 풀기 위해서는 가속도 공식을 사용하여야합니다.\n");
        printf("관련 공식 가속도 공식 a = (Δv / Δt)입니다.\n");
        printf("Δv는 속력의 변화량이고, Δt는 시간의 변화량 입니다.\n\n");
        printf("Δv는 vf(나중 속력)m/s - vi(처음 속력)m/s 이므로\n");
        printf("Δv = %6.2lf m/s - %6.2lf m/s 입니다. \n\n", vf, vi);
        printf("Δt는 tf(나중 시간)s - ti(처음 시간)s 이므로.\n");
        printf("Δt = %6.2lf s - %6.2lf s 입니다. \n\n", zero_back1, ti);

        vf_m_s = vf * 1000 / 3600;


        printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s 으로 단위를 맞춰야 합니다.\n");
        printf("1 km = 1000 m 로 * 1000 m 을 해주고 h = 3600 s 이므로 / 3600 s 으로 해줍니다.\n");
        printf("km/h 를 m/s 으로 바꿔주면 %6.2lf km/h 가 %6.2lf m/s 가 됩니다.\n", vf, vf_m_s);

        printf("=================================================================\n\n\n");
    }

    if (answer == SHOW)
    {

        printf("=========================   정답   =============================\n");
        answer1 = vf_m_s / zero_back1;
        printf("관련 공식 가속도 공식 a = (Δv / Δt)에 구해준 것들을 대입을 해줍니다.\n");
        printf("가속도 a = %6.2lf m/s / %6.2lf s 입니다. \n", vf_m_s, zero_back1);
        printf("따라서 이 자동차의 가속도(a)는 %6.2lf m/s^2 입니다.\n", answer1);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    printf("(b) 어느 전기자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2 인가?\n\n", zero_back2);

    if (solution == SHOW)
    {
        printf("========================   풀이   =============================\n");
        printf("이 문제를 풀기 위해서는 가속도 공식을 사용하여야합니다.\n");
        printf("관련 공식은 가속도 공식 a = (Δv / Δt)입니다.\n");
        printf("Δv는 vf(나중 속력)m/s - vi(처음 속력)m/s 이므로\n");
        printf("Δv = %6.2lf m/s - %6.2lf m/s 입니다. \n\n", vf, vi);
        printf("Δt는 tf(나중 시간)s - ti(처음 시간)s 이므로\n");
        printf("Δt = %6.2lf s - %6.2lf s 입니다. \n\n", zero_back2, ti);

        vf_m_s = vf * 1000 / 3600;

        printf("(a)문제와 똑같이 해답인 가속도를 구하기 위해서는 km/h 를 m/s 으로 단위를 맞춰야 합니다. \n\n");
        printf("1 km = 1000 m 로 *1000 m 을 해주고 h = 3600 s 이므로 /3600 s 을 해줍니다. \n");
        printf("그러므로 공식의 풀이는 %6.2lf m/s * 1000 / 3600m/s / %6.2lfs 입니다. \n", vf, vf_m_s);
        printf("=================================================================\n\n\n");
    }

    if (answer == SHOW)
    {

        printf("=========================   정답   =============================\n");
        answer2 = vf_m_s / zero_back2;
        printf("관련 공식 가속도 공식 a = (Δv / Δt)에 구해준 것들을 대입을 해줍니다.\n");
        printf("가속도 a = %6.2lf m/s / %6.2lf s 입니다. \n", vf_m_s, zero_back2);
        printf("따라서 이 자동차의 가속도(a)는 %6.2lf m/s^2 입니다.\n", answer2);
        printf("=================================================================\n\n\n");
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