#include <stdio.h>

int main(void)
{
	FILE *fp = NULL; //*fp ������ ����, �����͸� �ʱ�ȭ ��ų������ 0;�� ������� �ʰ� NULL;�̶�� ���� ��� 
	fp = fopen("input.txt", "w"); //fopen -> ������ �����  
	// w -> ���� ���(Write) r -> �б� ���(read)
	if(fp == NULL) //�ش������� ���� ���Ͽ��ٸ�  
	{
		printf("���� ���⿡ �����Ͽ����ϴ�.\n");
	 } 
	else
	{
		printf("���� ���⿡ �����Ͽ����ϴ�.\n");
	}
	fputc('H', fp);   // fputc�� ����Ҷ����� '����ϱ� 
	fputc('E', fp);   // ���ε��� ������ϰ� f put c ��� ���� 
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp); 
	fclose(fp);           // ������ �ݾ��ٶ����� fclose��� ������ ����Ͽ� ���������ͺ����� �޾������ 
	
	return 0;
}
