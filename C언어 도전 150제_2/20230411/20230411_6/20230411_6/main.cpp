#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("���̸� �Է��Ͻÿ�:  \n");
	scanf("%d", &x);

	if (x < 20)
	{
		printf("���̰� 20�� �̸��̹Ƿ� 30%%�� ���ε˴ϴ�. \n");
	}
	else
	{
		printf("���̰� 20�� �̻��̹Ƿ� ���� ���� ����� �ƴմϴ�. \n");
	}
}