//while 문을 이용한 합계 프로그램 266pg
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, sum;
	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("합계는 %d입니다.\n", sum);
}