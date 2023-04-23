// 7.7무한 루프 문 294pg
#include <stdio.h>
#define SEED_MONEY 1000000

void main()
{
	int year = 0, money = SEED_MONEY;

	while (1)
	{
		year++;
		money = money * (1 + 0.30);
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("%d년\n", year);
}