#include <stdio.h>

// �Է¹��� ���ڿ��� �״�� �����  
// fgets(fopen����, ���ٿ��� �о�� ���ڼ�); 
int main()
{
	char s[100];
	while (fgets(s,100,stdin)) { // s �Լ�, 100 ���ڿ�, stdin Ű����� 
		printf("%s", s);
	}
	return 0;
}
