#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student // struct ����ü ���ÿ��� #include <stdlib.h> ��! ����  
{
	int number;              //�й� 
	char name[10];           //�̸�   (����ü�� Ȱ���ϸ� �̰͵��� �ѹ��� ��� ����ϴ°��� ����) 
	double grade;            //����    �迭�̳� ������ ������ ���� �����ϰ� ��� ��� ���� 
};

int main(void) 
{
	struct student s; //s�� ������ �ǹ� 
	
	printf("�й��� �Է����ּ��� :");
	scanf("%d", &s.number);
	printf("�̸��� �Է����ּ��� :");
	scanf("%s", &s.name);
	printf("������ �Է����ּ��� :");
	scanf("%.1f", &s.grade); 
 
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade); // lf��� ������� (double)
	return 0;
}
