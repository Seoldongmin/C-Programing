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
    double ti = 0.0;
    double vi = 0.0;
    double vf = 100.0;
    double answer1 = 0.0;
    double answer2 = 0.0;
    double vf_m_s = 0.0;
    




    printf("\n\n");
    printf("2-9 \n");
    printf("���Ͽ��� ����� ���� �¿����� ���ι��� %6.2lf s��� �մϴ�.\n", zero_back1);
    printf("(���ι��� ���� ���¿��� ����Ͽ� �ӵ��� %6.2lf km/h�� �����ϴ� �� �ɸ��� �ð��� ���Ѵ�.)\n\n", vf);
    printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2 �ΰ�?\n\n");

    vf_m_s = vf * 1000 / 3600;
    
    if (solution == SHOW)
    {
        printf("=========================    Ǯ ��   ============================\n");
        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x :�Ÿ���ȭ�� �Դϴ�.\n");
        printf("1 km = 1000 m �� * 1000 m �� ���ְ� h = 3600 s �̹Ƿ� / 3600 s ���� ���ݴϴ�.\n");
        printf("��v�� vf(���� �ӷ�)m/s - vi(ó�� �ӷ�)m/s �̹Ƿ� ��v = (%6.2lf km/h * 1000 / 3600) - %6.2lf m/s �Դϴ�. \n", vf, vi);
        printf("��t�� tf(���� �ð�)s - ti(ó�� �ð�)s �̹Ƿ�. ��t = %6.2lf s - %6.2lf s �Դϴ�. \n", zero_back1, ti);
        printf("���� ����  v^2 - v0^2 = 2 * a * ��x�� �����ϸ� ���ӵ� a �� ���� �� �ֽ��ϴ�.\n\n\n");
    }

    if (answer == SHOW)
    {
        answer1 = vf_m_s / zero_back1;
        printf("=========================   �� ��   =============================\n");
        printf("�� �ڵ����� ���ӵ�(a)�� %6.2lf m/s^2 �Դϴ�.\n", answer1);
        printf("\n\n\n");
    }

    printf("(b) ��� �����ڵ����� ���ι��� %6.2lf s��� �̶� ���ӵ��� �� m/s^2 �ΰ�?\n\n\n", zero_back2);

    if (solution == SHOW)
    {
        printf("=========================    Ǯ ��   ============================\n");
        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x :�Ÿ���ȭ�� �Դϴ�.\n");
        printf("1 km = 1000 m �� * 1000 m �� ���ְ� h = 3600 s �̹Ƿ� / 3600 s �� ���ݴϴ�. \n");
        printf("��v�� vf(���� �ӷ�)m/s - vi(ó�� �ӷ�)m/s �̹Ƿ� ��v = (%6.2lf km/h * 1000 / 3600) - %6.2lf m/s �Դϴ�.\n", vf, vi);
        printf("��t�� tf(���� �ð�)s - ti(ó�� �ð�)s �̹Ƿ� ��t = %6.2lf s - %6.2lf s �Դϴ�. \n\n", zero_back2, ti);
        printf("���� ����  v^2 - v0^2 = 2 * a * ��x�� �����ϸ� ���ӵ� a �� ���� �� �ֽ��ϴ�.\n\n\n");
    }

    vf_m_s = vf * 1000 / 3600;

    if (answer == SHOW)
    {
        answer2 = vf_m_s / zero_back2;
        printf("=========================   �� ��   =============================\n");
        printf("�� �ڵ����� ���ӵ�(a)�� %6.2lf m/s^2 �Դϴ�.\n", answer2);
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