#include <stdio.h>

//o(N * logN)
//��Ȳ������ �ٸ����� �ظ��Ѱ�� �������� ���� ���� 
//�̹� ������ �Ǿ��ִ� ���� o(N ^ 2)�� �����  

int number = 10;
int data[10] = {1, 6, 4, 8, 7, 2, 3, 10, 5, 9};

void qucksrot(int *data, int start, int end) { //start�� ������ �����ϴ� ù��°, end�� ������ 
	if (start >= end) { // ���Ұ� 1���� ���
		return; 
		
	}
	
	int key = start; //ù��° ����
	int i = start + 1; // ����->������ ������� key���� ū �� 
	int j = end; // ����(������) ������� key���� ���� �� 
	int temp; //��ü �뵵 
	
	while (i <= j) { // ������������ �ݺ�, �������ԵǸ� �̺κ� Ż��, ������ ��ġ�� �ǹ�  
		while(i <= end && data[i] <= data[key]) { // Ű(ó������) ������ ū ���� ����������  
			i++;
		} 
		while(j > start && data[j] >= data[key]) { // Ű(ó������) ������ ���� ���� ���������� 
			j--;                                   // j > start�� j�� ���ʿ� �ִ� ���� ħ���� �� ������ 
		}
		if (i > j) { // ���� ������ ���¸� Ű���� ��ü, ���� �ƴ϶� ���� ��ġ 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp; 
		} else {  // �������� �ʾҴٸ� ū���� ���� ���� �ٲ�  
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}  
	// ���ڰ� ������� ������ �Ǹ� �������� ���ڰ� ���� ������ ������ ū���� ������ �����ϱ�  ������ ���� ���� �������� �ϰڴٶ�� �ǹ�  
	qucksrot(data, start, j - 1); // ���������� ����,  // data���� start ���� j - 1 ����  
	qucksrot(data, j + 1, end);  // ���������� ������  // ���  , ���� �ٽ� �������� ���� ??
}

int main() 
{
	qucksrot(data, 0, number - 1); // ??
	for(int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	} 
	
	return 0;
}
