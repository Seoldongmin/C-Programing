#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x, y, z;
	float min, max;
	
	printf("���� �� �Ǽ��� �Է����ּ���.: \n");
	
	printf("ù��°  �Ǽ��� �Է����ּ���.: \n");
	scanf("%f", &x);
	printf("�ι�°  �Ǽ��� �Է����ּ���.: \n");
	scanf("%f", &y);
	printf("����° �Ǽ��� �Է����ּ���.: \n");
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
    printf("�ִ� : %f\n" , max);
    printf("�ּڰ� : %f\n" , min);

    return 0;
}