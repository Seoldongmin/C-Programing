#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_9(int solution, int answer)
{
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
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %4.1lf s라고 한다.\n\n", zero_back1);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
	printf("=================================================================\n\n\n\n\n");

	if (solution == SHOW)
	{
		tf1 = zero_back1;
		printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
		printf("========================   풀이   =============================\n");
		printf("관련 공식은 가속도 공식 = (vf - vi) / (tf - ti) 입니다.\n");
		printf(" = (%3.1lf - %3.1lf) / (%3.1lf - %3.1lf) \n", vf1, vi1, tf1, ti1);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{
		answer1 = ((vf1 * 1000 / 3600) - vi1) / (tf1 - ti1);
		printf("=========================   정 답   =============================\n");
		printf("이 자동차의 가속도는 %3.2lf m/s^2\n", answer1);
		printf("=================================================================\n\n\n\n\n");
	}



	if (solution == SHOW)
	{
		tf2 = zero_back2;
		printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
		printf("========================   풀이   =============================\n");
		printf("관련 공식은 가속도 공식 = (vf - vi) / (tf - ti) 입니다.\n");
		printf(" = (%3.1lf - %3.1lf) / (%3.1lf - %3.1lf) \n", vf2, vi2, tf2, ti2);
		printf("=================================================================\n\n");

	}

	if (answer == SHOW)
	{
		answer2 = ((vf2 * 1000 / 3600) - vi2) / (tf2 - ti2);
		printf("=========================   정 답   =============================\n");
		printf("이 자동차의 가속도는 %3.2lf m/s^2\n", answer2);
		printf("=================================================================\n");
	}
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	int distance1 = 100;
	double y = 0;
	double y0 = 0;
	double v0 = 0;
	double t;
	double a = 9.8;
	double answer1 = 0;


	printf("\n\n");
	printf("2-25 \n");
	printf("========================   풀 이   =============================\n");
	printf("헬리콥터가 %.2lf m/s의 속력으로 수직하게 올라가고 있다.\n", velocity1);
	printf("지면으로부터 %d m 높이에서 창문을 통해 상자를 떨어뜨렸다. \n\n", distance1);
	printf("그 상자가 지면에 도달하는 데 걸리는 시간은 얼마인가? \n\n");
	printf("================================================================\n\n");


	if (solution == SHOW)
	{
		v0 = velocity1;
		y0 = distance1;
		printf("========================   풀 이   =============================\n");
		printf("관련 공식은 등가속도 운동식 y = y0 + v0 * t + (a * t^2) / 2 입니다.\n");
		printf("y = y0 + (v0 * t) + (a*t*t)/2 \n");
		printf("%.2lf = %.2lf +(%.2lf * t) + (%.2lf * t^2)/2\n", y, y0, v0, a * -1);
		printf("================================================================\n\n");
	}


	if (answer == SHOW)
	{
		answer1 = 5.11;
		printf("========================   정 답   =============================\n");
		printf("(%.2lf / 2)t^2 + %.2lf + %.2lf \n", a, v0, y0);
		printf("t = %.2lf\n", answer1);
		printf("================================================================\n\n");
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

	//Excersize_2_9(0, 0);


	Excersize_2_9(Show_Solution, Answer);
	Excersize_2_25(Show_Solution, Answer);


}