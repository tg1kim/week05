#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	char data = 'a';
	char key = 0xff;
	char encrptedData, origData;
	printf("  ������ ���� = %c\n", data);
	encrptedData = data ^ key;
	printf("��ȣȭ�� ���� = %c\n", encrptedData);
	origData = encrptedData ^ key;
	printf("  ������ ���� = %c\n", origData);
}