#include <stdio.h>

int INF = 1000000000;
int number = 6;

int a[6][6] = {
	{0, 2, 5, 1, INF, INF}, // 0
	{2, 0, 3, 2, INF, INF}, // 1
	{5, 3, 0, 3, 1, 5}, // 2
	{1, 2, 3, 0, 1, INF}, // 3
	{INF, INF, 1, 1, 0, 2}, // 4
	{INF, INF, 5, INF, 2, 0}, // 5
};

bool v[6]; // �湮�� ����Դϴ�.
int d[6]; // �Ÿ��Դϴ�.

// ���� �ּ� �Ÿ��� ������ ������ ��ȯ�մϴ�. 
int getSmallIndex() {
	int min = INF;
	int index = 0;
	for(int i = 0; i < number; i++) {
		if(d[i] < min && !v[i]) {
			min = d[i]; 
			index = i; 
		} 
	} 
	return index; 
} 

// ���ͽ�Ʈ�� �����ϴ� �Լ��Դϴ�.  
void dijkstra(int start) {
	for(int i = 0; i < number; i++) {
		d[i] = a[start][i]; // ���ı��س�� ������ ������ ���� 
	}
	v[start] = true; // ������  
	for(int i = 0; i < number - 2; i++) { // number - ���� - ��  
		int current = getSmallIndex(); // �ּҰ�(��ġ)�� ����  
		v[current] = true; // �湮������ true 
		for(int j = 0; j < number; j++) { 
			if(!v[j]) { // �湮�� ���ߴٸ� (�ּҰ��� �ƴ϶��) 
				if(d[current] + a[current][j] < d[j]) {
		// �湮�� ��带 �������� ��带 ���ļ� �ٸ� �������� �ּҰ�
					d[j] = d[current] + a[current][j];
				}
			}
		}
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	dijkstra(n); // n�� �������� 1~6�� n������ �ּҰŸ� 
	for(int i = 0; i < number; i++) {
		printf("%d ", d[i]);
	}
	
	return 0;
}
