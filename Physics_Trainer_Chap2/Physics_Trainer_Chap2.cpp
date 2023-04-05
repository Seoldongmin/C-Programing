#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_5(int solution, int answer)
{
	int h = 1;

	double distance1 = 200;
	double velocity1 = 90;
	double distance2 = 200;
	double velocity2 = 50;

	printf("\n\n");
	printf("2-5 \n");
	printf("어떤 사람이 고속도로를 처음 %.0lf km는 %.0lf km/h의 속력으로 달리고, %.0lf 시간동안 점심식사를 한 후에 다시 %.0lf km를 %.0lf km/h의 속도로 달려서 되돌아왔다.\n\n", distance1, velocity1, h, distance2, velocity2);
	printf("(a) 이 사람의 여행과정에서 평균속력을 구하시오.\n\n");
	printf("(b) 이 사람의 여행과정에서 평균속도를 구하라.\n\n");
}


void Excersize_2_15(int solution, int answer)
{
	double velocity1 = 120;
	double distance1 = 240;

	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %.0lf km/h이다.\n\n", velocity1);
	printf("(a) 이 비행기가 활주로를 %.0lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance1);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");
}


void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	double distance1 = 100;

	printf("\n\n");
	printf("2-25 \n");
	printf("헬리콥터가 %.2lf m/s의 속력으로 수직하게 올라가고 있다.\n", velocity1);
	printf("지면으로부터 %.0lf m 높이에서 창문을 통해 상자를 떨어뜨렸다. \n\n", distance1);
	printf("그 상자가 지면에 도달하는 데 걸리는 시간은 얼마인가? \n\n");
}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_5(0, 0);
	Excersize_2_15(0, 0);
	Excersize_2_25(0, 0);


}