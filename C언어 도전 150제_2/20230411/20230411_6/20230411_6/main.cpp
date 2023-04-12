#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("나이를 입력하시오:  \n");
	scanf("%d", &x);

	if (x < 20)
	{
		printf("나이가 20세 미만이므로 30%%를 할인됩니다. \n");
	}
	else
	{
		printf("나이가 20세 이상이므로 할인 혜택 대상이 아닙니다. \n");
	}
}