#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi; //pointer Integer, *pi -> ������ ���� (�ּ�����) 
	pi = (int *)malloc(sizeof(int)); // malloc = �޸𸮸� �Ҵ��ض�.  malloc(sizeof(ũ��)) -> int���� ũ�⸸ŭ �Ҵ��ض� 4bvte
	   //(int *)����ȯ �뵵  
	if(pi == NULL)                  // malloc(4) == malloc(sizeof(int))
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); //���α׷��� �����մϴ�. 
	}
	*pi = 100; //pi �����Ͱ� ������ �ִ� �� �ּ��� ���� 100�� �־��. 
	printf("%d\n", *pi);
	//���� �޸� ����� ���Ŀ��� ������ �ش� �޸𸮸� ��ȯ�մϴ�. 
	free(pi); // �޸��� �������� ���̰� ȿ������ ���̱� ���ؼ� �ʿ�  
	return 0;
}
