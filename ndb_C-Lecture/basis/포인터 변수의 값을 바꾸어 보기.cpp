#include <stdio.h>

// x = *y , &x = y

int main(void)
{
	int i = 10;
	int *p;
	p = &i;                  // p�� ���� i�� �����Ͽ� pointer  &�� ���� �ּҸ� �ҷ��� 
	printf("i = %d\n", i);
	*p = 20;                // *p�� ���� �ٲپ i�� ���� �ٲ�� ��  
	printf("i = %d\n", i); 
	return 0;
}

