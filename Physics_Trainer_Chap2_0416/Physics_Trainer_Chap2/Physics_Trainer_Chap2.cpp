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
    double vf_m_s;




    printf("\n\n");
    printf("2-9 \n");
    printf("���Ͽ��� ����� ���� �¿����� ���ι��� %6.2lf s��� �մϴ�.\n", zero_back1);
    printf("(���ι��� ���� ���¿��� ����Ͽ� �ӵ��� 100 km/h�� �����ϴ� �� �ɸ��� �ð��� ���Ѵ�.)\n");
    printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");

    if (solution == SHOW)
    {
        printf("========================   Ǯ��   =============================\n");
        printf("�� ������ Ǯ�� ���ؼ��� ���ӵ� ������ ����Ͽ����մϴ�.\n");
        printf("���� ���� ���ӵ� ���� a = (��v / ��t)�Դϴ�.\n");
        printf("��v�� �ӷ��� ��ȭ���̰�, ��t�� �ð��� ��ȭ�� �Դϴ�.\n\n");
        printf("��v�� vf(���� �ӷ�)m/s - vi(ó�� �ӷ�)m/s �̹Ƿ�\n");
        printf("��v = %6.2lf m/s - %6.2lf m/s �Դϴ�. \n\n", vf, vi);
        printf("��t�� tf(���� �ð�)s - ti(ó�� �ð�)s �̹Ƿ�.\n");
        printf("��t = %6.2lf s - %6.2lf s �Դϴ�. \n\n", zero_back1, ti);

        vf_m_s = vf * 1000 / 3600;


        printf("������ �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s ���� ������ ����� �մϴ�.\n");
        printf("1 km = 1000 m �� * 1000 m �� ���ְ� h = 3600 s �̹Ƿ� / 3600 s ���� ���ݴϴ�.\n");
        printf("km/h �� m/s ���� �ٲ��ָ� %6.2lf km/h �� %6.2lf m/s �� �˴ϴ�.\n", vf, vf_m_s);

        printf("=================================================================\n\n\n");
    }

    if (answer == SHOW)
    {

        printf("=========================   ����   =============================\n");
        answer1 = vf_m_s / zero_back1;
        printf("���� ���� ���ӵ� ���� a = (��v / ��t)�� ������ �͵��� ������ ���ݴϴ�.\n");
        printf("���ӵ� a = %6.2lf m/s / %6.2lf s �Դϴ�. \n", vf_m_s, zero_back1);
        printf("���� �� �ڵ����� ���ӵ�(a)�� %6.2lf m/s^2 �Դϴ�.\n", answer1);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    printf("(b) ��� �����ڵ����� ���ι��� %6.2lf s��� �̶� ���ӵ��� �� m/s^2 �ΰ�?\n\n", zero_back2);

    if (solution == SHOW)
    {
        printf("========================   Ǯ��   =============================\n");
        printf("�� ������ Ǯ�� ���ؼ��� ���ӵ� ������ ����Ͽ����մϴ�.\n");
        printf("���� ������ ���ӵ� ���� a = (��v / ��t)�Դϴ�.\n");
        printf("��v�� vf(���� �ӷ�)m/s - vi(ó�� �ӷ�)m/s �̹Ƿ�\n");
        printf("��v = %6.2lf m/s - %6.2lf m/s �Դϴ�. \n\n", vf, vi);
        printf("��t�� tf(���� �ð�)s - ti(ó�� �ð�)s �̹Ƿ�\n");
        printf("��t = %6.2lf s - %6.2lf s �Դϴ�. \n\n", zero_back2, ti);

        vf_m_s = vf * 1000 / 3600;

        printf("(a)������ �Ȱ��� �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s ���� ������ ����� �մϴ�. \n\n");
        printf("1 km = 1000 m �� *1000 m �� ���ְ� h = 3600 s �̹Ƿ� /3600 s �� ���ݴϴ�. \n");
        printf("�׷��Ƿ� ������ Ǯ�̴� %6.2lf m/s * 1000 / 3600m/s / %6.2lfs �Դϴ�. \n", vf, vf_m_s);
        printf("=================================================================\n\n\n");
    }

    if (answer == SHOW)
    {

        printf("=========================   ����   =============================\n");
        answer2 = vf_m_s / zero_back2;
        printf("���� ���� ���ӵ� ���� a = (��v / ��t)�� ������ �͵��� ������ ���ݴϴ�.\n");
        printf("���ӵ� a = %6.2lf m/s / %6.2lf s �Դϴ�. \n", vf_m_s, zero_back2);
        printf("���� �� �ڵ����� ���ӵ�(a)�� %6.2lf m/s^2 �Դϴ�.\n", answer2);
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