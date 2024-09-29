#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	char data = 'a';
	char key = 0xff;
	char encrptedData, origData;
	printf("  원래의 문자 = %c\n", data);
	encrptedData = data ^ key;
	printf("암호화된 문자 = %c\n", encrptedData);
	origData = encrptedData ^ key;
	printf("  복원된 문자 = %c\n", origData);
}