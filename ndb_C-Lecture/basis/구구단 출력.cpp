#include <stdio.h>

int main()
{
	int x, i;
	printf("������ �Է��ϼ���:");
	scanf("%d", &x);
	for(i = 1; i<=9; i++) // 1�� ~9�ܱ��� ��� 
	{
		printf("%d X %d = %d\n", x, i, x * i);  // x X 1, x X 2, x X 3 ... x X 9���� ��� 
	 }                                          
	return 0;
}
