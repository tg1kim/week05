#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
       double x, y, result;
       printf("�ΰ��� �Ǽ��� �Է��Ͻÿ�: ");
       scanf("%lf %lf", &x, &y);
       result = x + y;		                    // ���� ������ �Ͽ��� ����� result�� ����
       printf("%f / %f = %f\n", x, y, result);
       result = x - y;		
       printf("%f - %f = %f\n", x, y, result);
       result = x * y;		
       printf("%f * %f = %f\n", x, y, result);
       result = x / y;		
       printf("%f / %f = %f\n", x, y, result);
}