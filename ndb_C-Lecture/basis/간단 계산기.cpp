#include <stdio.h>

int main()
{
	char o; // +,-���� �ĵ� char�� ���� 
	int x, y;
	while(1)
	{
		printf("������ �Է��ϼ���:");
		scanf("%d %c %d", &x, &o, &y); // �Է��� ���������� & ���̱� , �Ŀ� ,�� ���̱� 
		if(o == '+') // ���� ���������� '' ���̱� 
		{
			printf("%d %c %d = %d\n", x, o, y, x+y);
		 } 
		else if(o == '-') // else if�� �ش��ϴ� ���� ������, ������ �ĵ��� �����Ҷ��� else ��� 
		{
			printf("%d %c %d = %d\n", x, o, y, x-y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x*y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x/y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x%y);
		}
		else
		{
			printf("�Է��� �߸��Ǿ����ϴ�.\n");
		}
		getchar(); // ������ ���� 
		printf("���α׷��� �����Ͻðڽ��ϱ�?(y/n)\n");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("�Է��� �߸��Ǿ����ϴ�.\n");
		}
	}
	return 0;
}
