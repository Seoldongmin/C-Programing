#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a, b, c, d, e;
	double sum;
	double avg;

	printf("5개의 실수를 입력하세요 \n");

	printf("첫번째 실수를 입력하세요. : \n");
	scanf("%f", &a);

	printf("두번째 실수를 입력하세요. : \n");
	scanf("%f", &b);

	printf("세번째 실수를 입력하세요. : \n");
	scanf("%f", &c);

	printf("네번째 실수를 입력하세요. : \n");
	scanf("%f", &d);
	printf("다섯번째 실수를 입력하세요. : \n");
	scanf("%f", &e);

	sum = a + b + c + d + e;
	avg = sum / 5.0;

	printf("합은 %lf이고, 평균은 %lf 입니다.", sum, avg);

	return 0;
}