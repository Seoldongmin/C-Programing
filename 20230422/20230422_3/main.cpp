// 14��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()     
{
    int a = 0, b = 1, c, n;

    printf("���° �ױ��� ���ұ��? ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}