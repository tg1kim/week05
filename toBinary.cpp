#include <stdio.h>

#pragma warning(disable: )

void main() 
{
	양의 정수 num를 정의
	"십진수: "
	num에 입력
	양의 정수 mask를 정의하고 8 bit에만 1로 설정							// mask = 10000000
	"이진수: "
	num에 mask를 씌워 0이면 0 아니면 1을 출력
	mask를 오른쪽으로 shift시킨다									// 오른쪽으로 1비트 이동한다. 
	7번 더 반복
	"\n"
}