#include <iostream>
#include <queue>

// ����â�� 
// ���� ���� ���� ����  

using namespace std;

int main(void)
{
	queue<int> q;
	q.push(6); // �ִ´� 
	q.push(5);
	q.push(4);
	q.pop(); // ������. 
	q.pop();
	q.push(4);
	q.push(4);
	// 4 4 4
	printf("%d\n", q.size());
	 
	while(!q.empty()) { // ������� �ʴٸ�  
		cout << q.front() << ' '; // ����տ� �ִ°�(�������°�) ���  
		q.pop(); // ����  
	}
	
	return 0;
 } 
