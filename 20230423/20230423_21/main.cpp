// 291pg
#include <stdio.h>

void main()
{
	int x, y;

	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y; x++)
			printf("*");

		printf("\n");                // ���� �ݺ����� ����� ������ ����
	}
}