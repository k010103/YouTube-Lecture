#include <stdio.h>
#include <math.h>

struct point { // ����ü  
	int x;
	int y;
 };  // struct�� �Ͽ��Ҷ��� �������� �����ݷ��� �ٿ����� 
 
 int main(void)
{
    struct point p1, p2;
 	int xDiff, yDiff;    // xDiff�� yDiff�� ���� x��ǥ�� ������ , y��ǥ�� �������� �ǹ� 
 	double distance; 
 	
 	printf("1�� ���� ��ǥ�� �Է��ϼ��� :");
 	scanf("%d %d", &p1.x, &p1.y);
	 
	printf("2�� ���� ��ǥ�� �Է��ϼ��� :");
 	scanf("%d %d", &p2.x, &p2.y);
 	
 	xDiff = p1.x - p2.x;
 	yDiff = p1.y - p2.y;
 	
 	distance = sqrt(xDiff * xDiff + yDiff * yDiff);    // sqrt�� �������� ���ϴ� �Լ�, sqrt �Է½ÿ��� ��! #include <math.h> �Է��ϱ�
	printf("�� �� ������ �Ÿ��� %f �Դϴ�. \n", distance);
	
	return 0;  
 }
