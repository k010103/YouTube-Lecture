#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); // malloc = �޸𸮸� �Ҵ��ض�. char���� ũ�⸸ŭ x 100�� �Ҵ� 
	if(pc == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����Ͽ����ϴ�.");
		exit(1); 
	}
	// pc�� ����Ű�� �����͸� 1�� ������Ű�鼭 ���ĺ� �ҹ��ڸ� ���Խ�ŵ�ϴ�. 
	for(i = 0; i < 26; i++) // ���ĺ� ���� : 26��  
	{
		*(pc + i) = 'a' + i; //�ƽ�Ű �ڵ� �̿� a = 97��° b = 98��° ... z ����  
	}
	// �ƽ�Ű�ڵ� 0�� NULL�� �ǹ�, for���� Ż���ؼ� ������ ���������ڷ� NULL�� ������ ���ڿ��� ���� �ǹ� 
	*(pc + i) = 0;  // pc(�ּ�)��� ���ڿ� �������� ���Ḧ �ǹ� 
	
	
	printf("%s", pc);
	free (pc);
	
	return 0;
 } 
