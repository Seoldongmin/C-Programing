//while ���� �̿��� �հ� ���α׷� 266pg
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, sum;
	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n", sum);
}