#include <stdio.h>

//��� �Լ�(Recursive Function)
void print(int count) // �Լ��� ����� �� �Լ��ȿ��� �Լ� ��� 
{                    // ex) print��� �Լ��� ����� print��� �Լ��� �ٷ� ��� 
	if(count == 0) // count�� 0�� �ɶ����� ��� 
	{
		return;
	}
	else // count�� 0�� �ƴ϶�� ���� 
	{
		printf("���ڿ��� ����մϴ�.\n");
		print(count - 1); // ���ڿ��� ����ϰ� count���� -1 ����  
	}
}

int main(void)
{
	int number;
	printf("���ڿ��� � ����ұ��?");
	scanf("%d", &number);
	print(number); 
	return 0;
}
