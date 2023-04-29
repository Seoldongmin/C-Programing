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
    double zero_back1 = 7.1;
    double zero_back2 = 11.2;
    double ti = 0;
    double vi = 0;
    double vf = 100;
    double answer1;
    double answer2;
    double vf_m_s{};




    printf("\n\n");
    printf("2-9 \n");
    printf("���Ͽ��� ����� ���� �¿����� ���ι��� %6.2lf s��� �մϴ�.\n", zero_back1);
    printf("(���ι��� ���� ���¿��� ����Ͽ� �ӵ��� 100 km/h�� �����ϴ� �� �ɸ��� �ð��� ���Ѵ�.)\n\n");
    printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n");

    if (solution == SHOW)
    {
        printf("========================   Ǯ��   =============================\n");
        printf("���� ���� ���ӵ� ���� a = (��v / ��t), ��v�� �ӷ��� ��ȭ���̰�, ��t�� �ð��� ��ȭ�� �Դϴ�.\n");
        vf_m_s = vf * 1000 / 3600;
        printf("1 km = 1000 m �� * 1000 m �� ���ְ� h = 3600 s �̹Ƿ� / 3600 s ���� ���ݴϴ�.\n");
        printf("=================================================================\n\n\n");
    }

    if (answer == SHOW)
    {
        answer1 = vf_m_s / zero_back1;
        printf("=========================   ����   =============================\n");
        printf("�� �ڵ����� ���ӵ�(a)�� %6.2lf m/s^2 �Դϴ�.\n", answer1);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    printf("(b) ��� �����ڵ����� ���ι��� %6.2lf s��� �̶� ���ӵ��� �� m/s^2 �ΰ�?\n", zero_back2);

    if (solution == SHOW)
    {
        printf("========================   Ǯ��   =============================\n");
        printf("���� ������ ���ӵ� ���� a = (��v / ��t), ��v�� �ӷ��� ��ȭ���̰�, ��t�� �ð��� ��ȭ�� �Դϴ�.\n");
        vf_m_s = vf * 1000 / 3600;
        printf("1 km = 1000 m �� * 1000 m �� ���ְ� h = 3600 s �̹Ƿ� / 3600 s �� ���ݴϴ�. \n");
        printf("=================================================================\n\n\n");
    }

    if (answer == SHOW)
    {
        answer2 = vf_m_s / zero_back2;
        printf("=========================   ����   =============================\n");
        printf("�� �ڵ����� ���ӵ�(a)�� %6.2lf m/s^2 �Դϴ�.\n", answer2);
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