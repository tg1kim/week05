// 형변환 예제 프로그램

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	char c;
	int i;
	float f;
	c = 10000;										// 내림 변환
	i = 1.23456 + 10;								// 내림 변환
	f = 10 + 20;									// 올림 변환
	printf("c = %d, i = %d, f = %f \n", c, i, f);
}