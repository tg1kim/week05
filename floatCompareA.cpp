#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
        double a, b;
        a = (0.3 * 3) + 0.1;
        b = 1;
        printf("a == b�� ���: %d\n", a == b);
        printf("fabs(a - b) < 0.00001�� ���: %d\n", fabs(a - b) < 0.0001);
}