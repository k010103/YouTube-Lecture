#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("���� �̸��� �Է��ϼ��� : ");
	scanf("%s", fname);                        //���ϴ� ���� ���԰��� (���� ����ϱ�) 
	printf("Ž���� �ܾ �Է��ϼ��� : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL) //�б� ���� �ش� ������ ����  
	{
		fprintf(stderr,"���� %s�� �� �� �����ϴ�.\n", fname);
		// fprintf -> ���� ������ ������ ��� 
	    return 0;
	 } 
	
	while(fgets(buffer, 256, fp)) // 256�� ���̸�ŭ ������ ��� buffer�� ���� �� �ְ�  
	{
		line++;
		if(strstr(buffer, word))  // word(Ž���� �ܾ�)�� buffer�� ������ �Ǿ� �ִ���? 
		{
			printf("���� %d : �ܾ� %s��(��)�߰� �Ǿ����ϴ�.\n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
 } 
