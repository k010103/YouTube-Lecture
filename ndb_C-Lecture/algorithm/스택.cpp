#include <iostream>
#include <stack>

// ������ ���� �������� ���� �����͸� ����  

using namespace std;

int main(void) 
{
	stack<int> s; // ���� �Լ����� int���� �ϰڴٰ� ���� 
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop(); // ���ÿ��� 1���� ���� 
	s.push(6);
	s.pop();
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	} 
	
	return 0;
}


