#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
       int x, y;
       printf("두개의 정수를 입력하시오: ");
       scanf("%d%d", &x, &y);
       printf("x == y의 결과값: %d\n", x == y);
       printf("x != y의 결과값: %d\n", x != y);
       printf(" x > y의 결과값: %d\n", x > y);
       printf(" x < y의 결과값: %d\n", x < y);
       printf("x >= y의 결과값: %d\n", x >= y);
       printf("x <= y의 결과값: %d\n", x <= y);
}