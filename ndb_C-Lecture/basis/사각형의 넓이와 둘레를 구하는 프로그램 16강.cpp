#include <stdio.h>
#include <math.h>

// ���� = �ʺ� x ���� 
// �ѷ� = 2 x �ʺ� + 2 x ���� 
// ����ü �ȿ� �� ����ü�� ���� ����

struct point{
	int x;
	int y;
};

struct rect{            //�簢�� 
	struct point p1;      //��ǥ��� ���� �簢���� ���ʻ���� p1��   
	struct point p2;      // �������ϴ��� p2�� ���� ���� 
};

int main(void)
{
	struct rect r;    //r�̶�� �̸��� �簢�� ���� //point�� ���ִ� rect �Լ��� main�� ���Ǹ� �������ν� point�Լ��� �ڿ������� ��� ���� 
	int w, h, area, peri; //r�� ������ �ǹ� �� 
	//         ����  �ѷ� 
	printf("���ʻ���� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);             //r.�� rect�� �ǹ�(?) ���� ���� ��ǥ �Է� 
	printf("�������ϴ��� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);            // ������ �Ʒ� ��ǥ �Է� 
	
	w = abs(r.p2.x - r.p1.x);  // w =�ʺ� , abs() = ���� 
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;// ���� = �ʺ� x ���� 
	peri = 2 * w + 2 * h;// �ѷ� = 2 x �ʺ� + 2 x ���� 
	
	printf("�簢���� ���̴� %d�̰� �ѷ��� %d �Դϴ�.", area , peri); 
	return 0;
}
