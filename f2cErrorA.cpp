#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	double fTemp;
	double cTemp;
	printf("ȭ���µ��� �Է��Ͻÿ�");
	scanf("%lf", &fTemp);
	cTemp = 5 / 9 * (fTemp - 32);
	printf("�����µ��� %f�Դϴ�", cTemp);
}