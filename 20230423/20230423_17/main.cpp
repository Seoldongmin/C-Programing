// 반복을 이용한 팩토리얼 구하기 285pg
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	long fact = 1;
	int i, n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!은 %d입니다.\n", n, fact);
}