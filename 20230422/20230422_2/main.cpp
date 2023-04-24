// 10¹ø
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()    
{
    int i, j;

    for (j = 2; j < 100; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }
}