#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a, b, c, d, e;
	double sum;
	double avg;

	printf("5���� �Ǽ��� �Է��ϼ��� \n");

	printf("ù��° �Ǽ��� �Է��ϼ���. : \n");
	scanf("%f", &a);

	printf("�ι�° �Ǽ��� �Է��ϼ���. : \n");
	scanf("%f", &b);

	printf("����° �Ǽ��� �Է��ϼ���. : \n");
	scanf("%f", &c);

	printf("�׹�° �Ǽ��� �Է��ϼ���. : \n");
	scanf("%f", &d);
	printf("�ټ���° �Ǽ��� �Է��ϼ���. : \n");
	scanf("%f", &e);

	sum = a + b + c + d + e;
	avg = sum / 5.0;

	printf("���� %lf�̰�, ����� %lf �Դϴ�.", sum, avg);

	return 0;
}