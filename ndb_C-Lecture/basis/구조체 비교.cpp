#include <stdio.h>

struct point{
	int x;
	int y;
}; 

void comparepoint (struct point p1, struct point p2) {
	if(p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1�� p2�� �����ϴ�.\n");
	}                                    
} //�̽��� main�Լ��� �ִ°ͺ��� �ξ� ü���� 

int main()
{
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
	/*
	if(p1 == p2)
	{
		printf("p1�� p2�� �����ϴ�.\n");
		
	}  point p1�� point p2 ��ü������ ���� �񱳰� �Ұ��� 
	*/
	/*
		if(p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1�� p2�� �����ϴ�.\n");
	}                                    //�� ����ü ���� Ư¡�� ��Ƽ� ���ϴ°��� �����ϴ� 
                                         //�̰� ����� �Ǳ�������� �̰ͺ��� �����ִ� ����� �ξ� ü���� 
	*/
	
	comparepoint(p1, p2);
	
	return 0;
}
