//continue �� 296pg
#include <stdio.h>

void main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d", i);
	}
}