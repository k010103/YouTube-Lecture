#include <stdio.h>

int f[100];

int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(f[x] != 0) return f[x]; // f[x]�� �ش��ϴ� ���� ��ȯ  
							   // ���⼭�� ��ȯ�� �ǹ̴� dp���� ��ȯ�Ѵٴ� �ǹ�  
	return f[x] = dp(x-1) + dp(x-2);
}

int main(void) {
	
	int x;
	printf("\n%d", dp(10));
	
	return 0;
}
