// do..while ���� �̿��� �޴�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i = 0;
	do
	{
		printf("1---���θ����\n");
		printf("2---���θ����\n");
		printf("3---���θ����\n");
		printf("�ϳ��� �����Ͻÿ�:\n");
		scanf("%d", &i);
	} while (i < 1 || i > 3);

	printf("���õ� �޴�=%d \n", i);
}