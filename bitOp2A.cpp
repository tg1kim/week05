#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int a = 32;
	a = ~a;						// NOT �����ڷ� 1�� ������ �����. 
	a = a + 0x01;				// 1�� ���Ѵ�. 
	printf("a = %d\n", a);
}