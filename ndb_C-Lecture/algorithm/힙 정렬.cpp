#include <stdio.h>

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main(void) {
	// ���� ���� 
	for(int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2; // Ư���� ������ �θ� �ǹ���  
			if(heap[root] < heap[c]) { // �θ� < �ڽİ�  
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		}while (c != 0); // do while���� ���� ó���� �ϰ� ��  
	} 
	// ũ�⸦ �ٿ����� �ݺ������� ���� ���� 
	// ��Ʈ�� �ִ� ���� �ڷ� �����鼭 ��Ʈ������ 1�� ����  
	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0]; // heap[0] : ��Ʈ  
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1; // �ٽ��ѹ� ���� ����  
		do {
			c = 2 * root + 1; // c : ��Ʈ�� �ڽ�  
			// �ڽ� �߿� �� ū ���� ã��
			if(c < i - 1 && heap[c] < heap[c + 1]) { // ������ ����� �ʵ��� ���� �ڽ��߿� �� ū �� ã�� 
				c++;    // ���ʰ� �������߿��� �� ū ���� c�� ���� ?
			} 			// �������� �� ũ�ٸ� c++�� ���༭ ���������� �̵�
			
			// ��Ʈ���� �ڽ��� ũ�ٸ� ��ȯ 
			if(c < i && heap[root] < heap[c]) {  // �ڽİ��� c�� ������ʰ� ��Ʈ���� �� ũ�ٸ� ��ȯ  
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c; // ��������� �������� ���� ? 
		} while (c < i);
		// ū ���� �ڷ� ������ �ٽ� �� ���� ����� �ݺ�����  
	} 
	for(int i = 0; i < number; i++) {
		printf("%d ", heap[i]);
	}
	return 0;
}
