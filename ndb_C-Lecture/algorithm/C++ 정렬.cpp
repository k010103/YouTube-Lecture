#include <iostream> // c++���� stdio.h ó�� ������� �ϴ� ���̺귯��  
#include <algorithm> // sort()�Լ��� c++��  algorithm�� ���ԵǾ�����  

// <<�� ���, >>�� �Է� 
// cout ���, cin �Է�  

using namespace std; // std::�� ������ ���̱� ������ ����� using namespace�� ����Ͽ� ����  

bool compare(int a, int b) { //bool�� ���� ������ ��� �Լ� (c++ ���� ����) 
		return a > b; // a < b �� �������� a > b �� ��������  
	}

int main() 
{
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare); // a �Լ�,�� a + 10����(10�� ����), compare�� �ǹ�  
	for(int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
}
