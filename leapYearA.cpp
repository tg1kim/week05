// ���� ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int year, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("���� ���� = %d\n", result);
}