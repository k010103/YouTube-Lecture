#include <iostream>

int main(void)
{
	int a;
	
	makef:
	puts("");
	printf("1~5�߿� ���� 1���� �Է����ּ��� : \n");
	scanf("%d", &a);
	
	switch (a) {
		case 1:
			printf("1�� �ԷµǾ����ϴ�.\n");
			break;
		case 2:
			printf("2�� �ԷµǾ����ϴ�.\n");
			break;
		case 3:
			printf("3�� �ԷµǾ����ϴ�.\n");
			break;
		case 4:
			printf("4�� �ԷµǾ����ϴ�.\n");
			break;
		case 5:
			printf("5�� �ԷµǾ����ϴ�.\n");
			break;
		default:
			printf("�Է°��� �߸��Ǿ����ϴ�.\n");
			goto makef;
			break; 
	}
	
	return 0;
}
