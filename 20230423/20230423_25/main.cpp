// goto ���� ��� 295~296pg
#include <stdio.h>

void main()
{
	int x, y;

	for (y = 1; y < 10000; y++)       // ��ø ����
	{
		for (x = 1; x < 10; x++)
		{
			if (_kbhit())             // Ű�� �������� OUT���� ����
				goto OUT;
			printf("*");
		}
		printf("\n");
	}
	OUT;
}