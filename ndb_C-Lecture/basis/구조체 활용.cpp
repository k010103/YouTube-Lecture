#include <stdio.h>
#include <stdlib.h>

//����ü 

struct student // struct ����ü ���ÿ��� #include <stdlib.h> ��! ����  
{
	int number;              //�й� 
	char name[10];           //�̸� 
	double grade;            //���� 
};

int main(void) 
{
	struct student s;
	
	printf("�й��� �Է����ּ��� :");
	scanf("%d", &s.number);
	printf("�̸��� �Է����ּ��� :");
	scanf("%s", s.name);                 //s.name �迭 ��ü�� �ּ��� ���� ������ ���� (&�� ������ ���� �߻�) 
	printf("������ �Է����ּ��� :");
	scanf("%lf", &s.grade);             // double �� �Է� �ٹ��������� %lf��� �Է¿����� �����      
 
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);
	return 0;
}
