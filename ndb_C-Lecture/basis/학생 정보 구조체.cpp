#include <stdio.h>
#include <string.h>
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
	struct student s; //s�� ������ �ǹ� 
	s.number = 20150001;
	strcpy(s.name ,"ȫ�浿"); // strcpy ��� �ÿ��� #include <string.h> ��! ���� (���� �Լ�) s.name�� ȫ�浿�̶�� ������ ���簡 ��  
	s.grade = 4.5;            // ȫ�浿�̶�� ���� char�� �迭�� ������ �ֱ⶧���� strcpy ���  
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);
	return 0;
}

