#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;
	while(i <= 1000) // �����ʿ� �ִ� ���� ���϶� ���� ���� , �ڵ尡 ���Ƶ� ���� ���ϰ�� �ݺ����� 
	{
		sum += i;
		i++; 
	 } 
	printf("1���� 1000������ ���� %d�Դϴ�\n", sum);
	return 0;
}
