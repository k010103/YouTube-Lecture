#include <stdio.h>

int nCr(int n, int r)
{
	if(r == 0 || r == n) // r�� 0�̰ų� r�� n�ϰ�� 1 return 
	{
		return 1;
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r); // ���� ���� (�ս��� ������ ���� ���� ���� )
	}
}

int main(void)
{
	int n,r;
	scanf("%d %d", &n, &r); // �Է� �Լ����� �� , ���̱�  
	printf("%d", nCr(n, r)); 
	return 0;
}
