#include <stdio.h>
#include <string.h>

// strcpy() ���ڿ� ���� �Լ� 
// �����͸� �ٷ�� �Լ�  
// ���縦 �� �ڿ��� �����Ѱ��� �ٲ� ���� �׷��� ����  

int main(void)
{
	char input[11] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); // �տ� �������� �ڿ� �������뿡 ����  
	printf("���ڿ� ���� : %s\n", result); //result��� �Լ��� [5]�� ������ �� �Ҵ� �������� �ұ��ϰ� "I Love You"��� ����  
	return 0;
}
