#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
       int x, y, result;
       printf("�ΰ��� ������ �Է��Ͻÿ�: ");
       scanf("%d %d", &x, &y);
       result = x + y;		                        // ���� ������ �Ͽ��� ����� result�� ����
       printf("%d + %d = %d\n", x, y, result);
       result = x - y;		                        // ���� ����
       printf("%d - %d = %d\n", x, y, result);
       result = x * y;		                        // ���� ����
       printf("%d + %d = %d\n", x, y, result);
       result = x / y;		                        // ������ ����
       printf("%d / %d = %d\n", x, y, result);
       result = x % y;		                        // ������ ����
       printf("%d %% %d = %d\n", x, y, result);
}