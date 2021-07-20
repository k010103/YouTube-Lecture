#include <stdio.h>

int main()
{ // FILE�� c��� �����Լ� 
	FILE *fp = NULL; //*fp �������Լ��� �ʱ�ȭ 
	int c;
	
	fp = fopen("input.txt", "r"); // r�� �б��� (read) ������ �־������ ������ ���� 
	
	if(fp == NULL) // fp == 0; ���� ���и� �ǹ� 
	{
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else
	{
		printf("���� ���⿡ �����Ͽ����ϴ�.\n");
	}
	
	while((c = fgetc(fp)) != EOF) // c = fgetc(fp) -> ���� �����ִ� ���Ͽ��� ���� 1���� �о c�� �����Ѵ� ��� �ǹ� 
	{                             // EOF = end of FILE ������ �� 
		putchar(c); // �츮 �ܼ�â�� �ش� ���ڸ� ��� 
	}
	
	fclose(fp); // �ش������� ���� (�ʼ�) 
	return 0;
}
