// ���� ���� ������ ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x = 10, y = 10, z = 33;	
	x += 1;											// x = x + 1;
	y *= 2;											// y = y * 2;
	z %= 10 + 20;									// z = z % (x + y );
	printf("x = %d,\ty = %d,\tz = %d\n", x, y, z);
}