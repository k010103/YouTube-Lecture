#include <stdio.h>

// ���� ���� 
int hour; // ��
int minute; // �� 
int minuteAdd;  // ���� �� 

void counter() // void�� return�� ���� ��밡�� 
{
	minute += minuteAdd; //���� �п� ������ �� �߰� 
	hour += minute / 60; // ���� 60�� �Ѵ°�� 1���Ͽ� �ÿ� �߰�  
	minute %= 60; // ���� 60�� �Ѵ°�� ������� ������ ���������� ���(�Ѵ°��� �ÿ� �̹� ������) 
	hour %= 24; // �õ� ���������� 24�� �Ѵ°�� ���� ������ ������ ���� ��� 
}

int main()
{
	printf("�ø� �Է��ϼ��� :");
	scanf("%d", hour);
	printf("���� �Է��ϼ��� :");
	scanf("%d", minute);
	printf("���� ���� �Է��ϼ��� :");
	scanf("%d", minuteAdd);
	counter(); //counter�� ����Ͽ� ���� ���� �ٷ� ��� ���� 
	printf("������ �ð��� %d�� %d�� �Դϴ�.\n", hour, minute);
	return 0;
}
