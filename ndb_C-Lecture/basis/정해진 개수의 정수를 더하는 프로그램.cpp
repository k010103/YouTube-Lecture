#include <stdio.h>

int main()
{
	int number, x, i, sum = 0;
	printf("������ ������ �Է��ϼ���:");
	scanf("%d", &number);
	for(i = 0; i < number; i++) // ���� number�� ����ŭ ������ �� ���� 
	{
		printf("������ ���� �Է��ϼ���:");
		scanf("%d", &x); 
		sum += x; // ���� ���� x�� ����  
	 } 
	 printf("��ü ������ ���� %d�Դϴ�.\n", sum);
	return 0;
}
