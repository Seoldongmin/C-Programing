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
	printf("� ����� ��ӵ��θ� ó�� %.0lf km�� %.0lf km/h�� �ӷ����� �޸���, %.0lf �ð����� ���ɽĻ縦 �� �Ŀ� �ٽ� %.0lf km�� %.0lf km/h�� �ӵ��� �޷��� �ǵ��ƿԴ�.\n\n", distance1, velocity1, h, distance2, velocity2);
	printf("(a) �� ����� ����������� ��ռӷ��� ���Ͻÿ�.\n\n");
	printf("(b) �� ����� ����������� ��ռӵ��� ���϶�.\n\n");
}


void Excersize_2_15(int solution, int answer)
{
	double velocity1 = 120;
	double distance1 = 240;

	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %.0lf km/h�̴�.\n\n", velocity1);
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %.0lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance1);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
}


void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	double distance1 = 100;

	printf("\n\n");
	printf("2-25 \n");
	printf("�︮���Ͱ� %.2lf m/s�� �ӷ����� �����ϰ� �ö󰡰� �ִ�.\n", velocity1);
	printf("�������κ��� %.0lf m ���̿��� â���� ���� ���ڸ� ����߷ȴ�. \n\n", distance1);
	printf("�� ���ڰ� ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
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