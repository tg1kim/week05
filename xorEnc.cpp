#include <stdio.h>

#pragma warning(disable: )

void main() 
{
	���� data�� �����ϰ� ���ĺ� a�� �ʱ�ȭ
	���� key�� �����ϰ� 16���� ff�� �ʱ�ȭ
	���� encrptedData, origData�� ����
	"  ������ ���� = %c\n" data ���
	encrptedData�� data�� key�� XOR �Ͽ� ����
	"��ȣȭ�� ���� = %c\n" encrptedData ���
	origData�� encrptedData�� key�� XOR �Ͽ� ����
	"  ������ ���� = %c\n" origData ���
}