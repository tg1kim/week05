#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
       int x, y;
       printf("�ΰ��� ������ �Է��Ͻÿ�: ");
       scanf("%d%d", &x, &y);
       printf("x == y�� �����: %d\n", x == y);
       printf("x != y�� �����: %d\n", x != y);
       printf(" x > y�� �����: %d\n", x > y);
       printf(" x < y�� �����: %d\n", x < y);
       printf("x >= y�� �����: %d\n", x >= y);
       printf("x <= y�� �����: %d\n", x <= y);
}