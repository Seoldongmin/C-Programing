// ���ڻ��� Ȯ�� 303pg
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;

	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++)
		int cash = initial_money;
		while (cash > 0 && cash < goal)
		{


		if ((double)rand() / RAND_MAX < 0.5) cash++;
		else                                 cash--;
		}
		if (cash == goal) wins++;  
}