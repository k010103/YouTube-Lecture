#include <stdio.h>

int main()
{
	int score = 70; //�л��� ������ �ǹ��մϴ�.
	if(score >= 90)
	{
		printf("����� ������ A�Դϴ�\n");
	 } 
	else if(score >= 80) // if�� �ٸ� ��� 
	{
		printf("����� ������ B�Դϴ�.\n");
	}
	else if(score >= 70)
	{
		printf("����� ������ C�Դϴ�.\n");
	}
	else // ���� ���� ���Ե����ʴٸ�  
	{
		printf("����� ������ F�Դϴ�\n");
	}
	return 0;
}
