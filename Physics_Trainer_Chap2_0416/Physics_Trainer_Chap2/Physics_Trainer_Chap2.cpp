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
	double velocity = 90;
	double velocity_m_s = 0;
	double acceleration1 = 3.91;
	double acceleration2 = 2.48;
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;
	double ti1 = 0;
	double tf1 = 0;
	double vi1 = 0;
	double vf1 = 100;
	double ti2 = 0;
	double tf2 = 0;
	double vi2 = 0;
	double vf2 = 100;
	double answer1 = 0;
	double answer2 = 0;


	printf("\n\n");
	printf("2-9 \n");
	printf("========================   문제   =============================\n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %4.1lf s라고 합니다.\n\n", zero_back1);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
	printf("=================================================================\n\n\n\n\n");

	if (solution == SHOW)
	{
		tf1 = zero_back1;
		printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
		printf("========================   풀이   =============================\n");
		printf("관련 공식은 가속도 공식 = (Δv / Δt)입니다.\n");
		printf("Δv는 xf(나중 속력) - xi(처음 속력) 입니다.\n");
		printf("Δt는 tf(나중 시간) - ti(처음 시간) 입니다.\n");
		printf(" = (%3.1lf - %3.1lf) / (%3.1lf - %3.1lf) \n", vf1, vi1, tf1, ti1);

		velocity_m_s = velocity * 1000 / 3600;

		printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s^2 으로 단위를 맞춰야 합니다. \n");
		printf("1 km = 1000 m 로 *1000 을 해주고 h = 3600 s 이므로 /3600 으로 해줍니다. \n");
		printf("그러므로 공식의 풀이는 100 * 1000 / 3600m/s / 7.10s 입니다. \n" , velocity, velocity, velocity_m_s);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{
		answer1 = ((vf1 * 1000 / 3600) - vi1) / (tf1 - ti1);
		printf("=========================   정 답   =============================\n");
		printf("관련 공식 (vf - vi) / (tf - ti) Δx에 대입하면");
		printf("(100 * 1000 / 3600m/s / 7.10s) 입니다.\n", velocity, velocity_m_s);
		printf("따라서 이 자동차의 가속도(a)는 %3.2lf m/s^2 입니다.\n", answer1, acceleration1);
		printf("=================================================================\n\n\n\n\n");
	}



	if (solution == SHOW)
	{
		tf2 = zero_back2;
		printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
		printf("========================   풀이   =============================\n");
		printf("관련 공식은 가속도 공식 = (Δv / Δt)입니다.\n");
		printf("Δv는 xf(나중 속력) - xi(처음 속력) 입니다.\n");
		printf("Δt는 tf(나중 시간) - ti(처음 시간) 입니다.\n");
		printf(" = (%3.1lf - %3.1lf) / (%3.1lf - %3.1lf) \n", vf2, vi2, tf2, ti2);

		velocity_m_s = velocity * 1000 / 3600;

		printf("(a)문제와 똑같이 해답인 가속도를 구하기 위해서는 km/h 를 m/s^2 으로 단위를 맞춰야 합니다. \n");
		printf("1 km = 1000 m 로 *1000 을 해주고 h = 3600 s 이므로 /3600 을 해줍니다. \n");
		printf("그러므로 공식의 풀이는 100 * 1000 / 3600m/s / 11.2s 입니다. \n", velocity, velocity, velocity_m_s);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{
		answer2 = ((vf2 * 1000 / 3600) - vi2) / (tf2 - ti2);
		printf("=========================   정 답   =============================\n");
		printf("관련 공식 (vf - vi) / (tf - ti) Δx에 대입하면");
		printf("(100 * 1000 / 3600m/s / 11.2s) 입니다.\n", velocity, velocity_m_s);
		printf("따라서 이 자동차의 가속도(b)는 %6.2lfm/s^2 입니다.\n", answer2, acceleration2);
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