#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int x;
	int y;

	printf("x�� ���� �Է��Ͻÿ�.: ");
	scanf("%d", &x);

	printf("y�� ���� �Է��Ͻÿ�.: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("x���� y�� ������ Ů�ϴ�.");
	}
	else
	{
		printf("x�� ���� y�� ������ �۽��ϴ�.");
	}

	return 0;
}