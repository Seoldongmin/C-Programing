#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y, z;
	float min, max;
	
	printf("세개 의 실수를 입력해주세요.: \n");
	
	printf("첫번째  실수를 입력해주세요.: \n");
	scanf("%f", &x);
	printf("두번째  실수를 입력해주세요.: \n");
	scanf("%f", &y);
	printf("세번째 실수를 입력해주세요.: \n");
	scanf("%f", &z);

    if (x >= y)
    {
        if (x >= z) max = x;
        else max = z;
    }
    else
    {
        if (y >= z) max = y;
        else max = z;
    }
    if (x <= y)
    {
        if (x <= z) min = x;
        else min = z;
    }
    else
    {
        if (y <= z) min = y;
        else min = z;
    }
    printf("최댓값 : %f\n" , max);
    printf("최솟값 : %f\n" , min);

    return 0;
}