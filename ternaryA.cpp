// ���� ������ ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x,y;
	printf("���� 2��: ");
	scanf("%d %d", &x, &y);
	printf("  ū �� = %d\n", (x > y) ? x : y);
	printf("���� �� = %d\n", (x < y) ? x : y);
}