#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int a = 32;
	a = ~a;						// NOT 연산자로 1의 보수로 만든다. 
	a = a + 0x01;				// 1을 더한다. 
	printf("a = %d\n", a);
}