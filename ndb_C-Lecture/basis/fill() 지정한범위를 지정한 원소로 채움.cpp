#include <iostream>

using namespace std;

int n[11];

int main(void) {
	
	fill(n, n+10, -2); // fill�� ������ ������ ������ ���ҷ� ä��� �Լ�
//	fill(begin, end , value);
	for(int i = 0; i < 10; i++) {
		printf("%d ", n[i]);
	}
	
}
