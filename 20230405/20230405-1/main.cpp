#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int  cm = 0, feet = 0;
	double inch;

	printf("키를 입력하시오(cm), ");
	scanf("%d", &cm);

	inch = double(cm) / 2.54;
	feet = inch / 12;
	inch = inch - double(feet) * 12;

	printf("%d cm는 %d피트 %.2lf인치 입니다. \n", cm, feet, inch);

	return 0;
}
