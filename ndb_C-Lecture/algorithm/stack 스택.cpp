#include <iostream>
#include <stack>

// �ù������ , �Ա��� �ⱸ�� ���� 

using namespace std;

int main(void)
{
	stack<int> s;
	s.push(6);
	s.push(5);
	s.pop();
	s.push(6);
	s.push(4);
	s.push(5);
	s.pop();
	s.pop();
	// 6 6
	while(!s.empty()) {
		cout << s.top() << ' '; // �Ա��� 1�� , ���� ���� �ִ°�  
		s.pop();
	}
	
	return 0;
}
