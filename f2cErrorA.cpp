#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	double fTemp;
	double cTemp;
	printf("화씨온도를 입력하시오");
	scanf("%lf", &fTemp);
	cTemp = 5 / 9 * (fTemp - 32);
	printf("섭씨온도는 %f입니다", cTemp);
}