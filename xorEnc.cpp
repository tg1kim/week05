#include <stdio.h>

#pragma warning(disable: )

void main() 
{
	문자 data를 정의하고 알파벳 a로 초기화
	문자 key를 정의하고 16진수 ff로 초기화
	문자 encrptedData, origData를 정의
	"  원래의 문자 = %c\n" data 출력
	encrptedData에 data와 key를 XOR 하여 대입
	"암호화된 문자 = %c\n" encrptedData 출력
	origData에 encrptedData와 key를 XOR 하여 대입
	"  복원된 문자 = %c\n" origData 출력
}