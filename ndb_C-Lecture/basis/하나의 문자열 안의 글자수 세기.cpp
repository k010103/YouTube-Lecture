// char : 1byte
// ���� : 1�� ũ�� (1byte)
// �ѱ� : 2�� ũ�� (2byte)
//array[10]; = ���� 10, �ѱ� 5 

#include <stdio.h>

int main(void)
{
	char input[1001];  // 1001���� ���ڿ��� �� �� �ִ� ����  
	gets(input);       //�� ������ �����ϸ� input�ȿ� ���ڿ��� ���� 
	int count = 0;
	while(input[count] != '\0' ) // '\0'�� nul�̶�� �� �ǹ� (nul�̶�� ���� ���ڿ��� �����ϰ� ���� ������ ä��)
	{
		count++; //count�� ���� 5�� �Ǿ����� �ݺ��Լ� ����  
	} 
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n", count);
	printf("�Է��� ���ڿ� : %s", input); // %s�� �ϳ��� ���ڿ��� �ǹ�  
	return 0;
 } 
