#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�

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
	printf("========================   ����   =============================\n");
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %4.1lf s��� �մϴ�.\n\n", zero_back1);
	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %4.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
	printf("=================================================================\n\n\n\n\n");

	if (solution == SHOW)
	{
		tf1 = zero_back1;
		printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
		printf("========================   Ǯ��   =============================\n");
		printf("���� ������ ���ӵ� ���� = (��v / ��t)�Դϴ�.\n");
		printf("��v�� xf(���� �ӷ�) - xi(ó�� �ӷ�) �Դϴ�.\n");
		printf("��t�� tf(���� �ð�) - ti(ó�� �ð�) �Դϴ�.\n");
		printf(" = (%3.1lf - %3.1lf) / (%3.1lf - %3.1lf) \n", vf1, vi1, tf1, ti1);

		velocity_m_s = velocity * 1000 / 3600;

		printf("������ �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s^2 ���� ������ ����� �մϴ�. \n");
		printf("1 km = 1000 m �� *1000 �� ���ְ� h = 3600 s �̹Ƿ� /3600 ���� ���ݴϴ�. \n");
		printf("�׷��Ƿ� ������ Ǯ�̴� 100 * 1000 / 3600m/s / 7.10s �Դϴ�. \n" , velocity, velocity, velocity_m_s);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{
		answer1 = ((vf1 * 1000 / 3600) - vi1) / (tf1 - ti1);
		printf("=========================   �� ��   =============================\n");
		printf("���� ���� (vf - vi) / (tf - ti) ��x�� �����ϸ�");
		printf("(100 * 1000 / 3600m/s / 7.10s) �Դϴ�.\n", velocity, velocity_m_s);
		printf("���� �� �ڵ����� ���ӵ�(a)�� %3.2lf m/s^2 �Դϴ�.\n", answer1, acceleration1);
		printf("=================================================================\n\n\n\n\n");
	}



	if (solution == SHOW)
	{
		tf2 = zero_back2;
		printf("(b) ��� �����ڵ����� ���ι��� %4.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
		printf("========================   Ǯ��   =============================\n");
		printf("���� ������ ���ӵ� ���� = (��v / ��t)�Դϴ�.\n");
		printf("��v�� xf(���� �ӷ�) - xi(ó�� �ӷ�) �Դϴ�.\n");
		printf("��t�� tf(���� �ð�) - ti(ó�� �ð�) �Դϴ�.\n");
		printf(" = (%3.1lf - %3.1lf) / (%3.1lf - %3.1lf) \n", vf2, vi2, tf2, ti2);

		velocity_m_s = velocity * 1000 / 3600;

		printf("(a)������ �Ȱ��� �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s^2 ���� ������ ����� �մϴ�. \n");
		printf("1 km = 1000 m �� *1000 �� ���ְ� h = 3600 s �̹Ƿ� /3600 �� ���ݴϴ�. \n");
		printf("�׷��Ƿ� ������ Ǯ�̴� 100 * 1000 / 3600m/s / 11.2s �Դϴ�. \n", velocity, velocity, velocity_m_s);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{
		answer2 = ((vf2 * 1000 / 3600) - vi2) / (tf2 - ti2);
		printf("=========================   �� ��   =============================\n");
		printf("���� ���� (vf - vi) / (tf - ti) ��x�� �����ϸ�");
		printf("(100 * 1000 / 3600m/s / 11.2s) �Դϴ�.\n", velocity, velocity_m_s);
		printf("���� �� �ڵ����� ���ӵ�(b)�� %6.2lfm/s^2 �Դϴ�.\n", answer2, acceleration2);
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