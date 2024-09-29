// 조건 연산자 프로그램

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int x,y;
	printf("정수 2개: ");
	scanf("%d %d", &x, &y);
	printf("  큰 수 = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d\n", (x < y) ? x : y);
}