#include <stdio.h>

//�ݺ��Լ��� �̿��Ͽ� ���ڰ���� ����մϴ�.
//�ݺ��Լ����� ��쿡�� ���� for���� while������ ������ �˴ϴ�.

int print(int a) // ���⼭ print�� print�� �������� �������ʰ� �׳� �Լ� ��ü�� ��� 
{
	int i, j;
	for(i = 0; i < a; i++) // i�� a��ŭ �ݺ� 
	{
	    for(j = 0; j <= i; j++) // j�� i��ŭ �ݺ� (�������·� ���°��� ���⼭ ����) 
	    {
		    printf("%d ", j + 1); // 1����~ a��ŭ �Ƕ�̵� ���� 
	    }
	    printf("\n");
    }
 } 
 
 int main(void)
 {
 	int a;
 	scanf("%d", &a);
 	print(a);
 	return 0;
 }
