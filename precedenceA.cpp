#include <stdio.h>

#define SEC_PER_MINUTE 60										// 1ºÐÀº 60ÃÊ

#pragma warning(disable: 4996 4326 6031)

void main()
{

       int x = 0, y = 0;
       int result;
       result = 2 > 3 || 6 > 7;
       printf("%d\n", result);
       result = 2 || 3 && 3 > 2;
       printf("%d\n", result);
       result = x = y = 1;
       printf("%d\n", result);
       result = - ++x + y--;
       printf("%d\n", result);
}