#include <iostream>
#include <vector>
#include <queue>

// �������� ��������� ���� ���
// first = ��� , second = �̵� ���  

using namespace std;

int number = 6;
int INF = 1000000000;

vector<pair<int, int> > a[7]; // ��������
int d[7]; // �ּ� ��� 

void dijkstra(int start) {
	d[start] = 0;
	priority_queue<pair<int, int> > pq; // �������Դϴ�. (�켱���� ť)
	// ū���� ���� 
	pq.push(make_pair(start, 0)); 
	// ����� ������� ó���� �ϹǷ� ť�� ����մϴ�. 
	while(!pq.empty()) { // pq�� ����ִٸ� �� ����  
		int current = pq.top().first; // �湮�ϴ³�� 
		// ª�� ���� ���� ������ ����ȭ(-)�մϴ�.
		int distance = -pq.top().second; 
		// �������� �ʿ���ϹǷ� ū���� ����ȭ�ؼ� �ڷ� ����  
		pq.pop();
		// �ִ� �Ÿ��� �ƴ� ��� ��ŵ�մϴ�.
		if(d[current] < distance) continue;
		for(int i = 0; i < a[current].size(); i++) {
			// ���õ� ����� �������
			int next = a[current][i].first;
			// ���õ� ��� ���ļ� ������ ���� ���� ���
			int nextDistance = distance + a[current][i].second;
			// ������ �ּ� ��뺸�� �� �����ϴٸ� ��ü�մϴ�.
			if(nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push(make_pair(next, -nextDistance));
				// �� ū���� �������� ���⶧���� ����ȭ(-)
				// �� ���� ����� ���� ������ ���ؼ�  
			} 
		} 
	} 
}

int main(void) {
	// �⺻������ ������ ����������� ����� ���� 
	for(int i = 1; i <= number; i++) {
		d[i] = INF;
	} 
	// first = ��� , second = ���  
	a[1].push_back(make_pair(2, 2));
	a[1].push_back(make_pair(3, 5));
	a[1].push_back(make_pair(4, 1));
	
	a[2].push_back(make_pair(1, 2));
	a[2].push_back(make_pair(3, 3));
	a[2].push_back(make_pair(4, 2));

	a[3].push_back(make_pair(1, 5));
	a[3].push_back(make_pair(2, 3));
	a[3].push_back(make_pair(4, 3));
	a[3].push_back(make_pair(5, 1));
	a[3].push_back(make_pair(6, 5));
	
	a[4].push_back(make_pair(1, 1));
	a[4].push_back(make_pair(2, 2));
	a[4].push_back(make_pair(3, 3));
	a[4].push_back(make_pair(5, 1));
	
	a[5].push_back(make_pair(3, 1));
	a[5].push_back(make_pair(4, 1));
	a[5].push_back(make_pair(6, 2));
	
	a[6].push_back(make_pair(3, 5));
	a[6].push_back(make_pair(5, 2));
	
	dijkstra(1);
	for(int i = 1; i <= number; i++) {
		printf("%d ", d[i]);
	} 
	
	return 0;
} 
