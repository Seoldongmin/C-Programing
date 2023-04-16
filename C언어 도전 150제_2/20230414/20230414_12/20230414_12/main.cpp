#include <stdio.h>

void main()
{
	int i = 2000000000;
	int j = 3000000000;      // int는 32비트(-2,147,483,648 ~ 2,147,483,647)까지 밖에 저장할수 없어서 안나온다.

	printf("i = %d\n", i);
	printf("j = %d\n", j);
}
