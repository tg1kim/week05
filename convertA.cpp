// ����ȯ ���� ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	char c;
	int i;
	float f;
	c = 10000;										// ���� ��ȯ
	i = 1.23456 + 10;								// ���� ��ȯ
	f = 10 + 20;									// �ø� ��ȯ
	printf("c = %d, i = %d, f = %f \n", c, i, f);
}