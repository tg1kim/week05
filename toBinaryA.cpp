#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	unsigned int num;
	printf("������: ");
	scanf("%u", &num);
	unsigned int mask = 1 << 7;							// mask = 10000000
	printf("������: ");
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;									// ���������� 1��Ʈ �̵��Ѵ�. 
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;									// ���������� 1��Ʈ �̵��Ѵ�. 
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;									// ���������� 1��Ʈ �̵��Ѵ�. 
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n");
}