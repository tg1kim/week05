#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int money, change;
	int price, c1000, c500, c100;
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);						// ���� ���� �Է¹޴´�. 
	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &money);						// ���� ���� �Է¹޴´�. 
	change = money - price;						// �Ž������� change�� ����
	c1000 = change / 1000;						// ���� �ܵ����� 1000������ ������ ����Ѵ�. 
	change = change % 1000;						// ������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 
	c500 = change / 500;						// ���� �ܵ����� 500�� ������ ������ ����Ѵ�. 
	change = change % 500;						// ������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 
	c100 = change / 100;						// ���� �ܵ����� 100�� ������ ������ ����Ѵ�. 
	change = change % 100;						// ������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 
	printf("�Ž������� ������ �����ϴ�.\n");
	printf("õ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);
}