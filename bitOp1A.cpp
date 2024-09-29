#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	printf("AND : %08X\n", 0x9 & 0xA);
	printf(" OR : %08X\n", 0x9 | 0xA);
	printf("XOR : %08X\n", 0x9 ^ 0xA);
	printf("NOT : %08X\n", ~0x9);
	printf(" << : %08X\n", 0x4 << 1);
	printf(" >> : %08X\n", 0x4 >> 1);
}