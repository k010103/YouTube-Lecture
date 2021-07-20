#include <stdio.h>

int number= 8;
int sorted[8]; // ���ĵ� ��� �迭�� ���� �� �ִ� ����, ���� �迭�� �ݵ�� ���������� ����  

void merge(int a[], int m, int middle, int n) {
	int i = m; // 1��° �迭 �������� 
	int j = middle + 1; // 2��° �迭 ��������  
	int k = m; // �迭�� �������� ����� �迭, m�� �Ȱ��� ��  
	// ���� ������� �迭�� ���� 
	while (i <= middle && j <= n) { //���� �κ� ���յ��� �ǹ� i�� 1��° ���������� j�� 2��° ����������  
		if (a[i] <= a[j]) { // kù��°�� �� ������ �����ϴ� ����  
			sorted[k] = a[i]; 
			i++;
		} else {
			sorted[k] = a[j];
			j++;
		} 
		k++; // �迭�� ������ ���� �������� �̵�  
	} 
	// ���� �����͵� ����, i�� ���� ���� ���ų� j�� ���� ���̳��ų� �׷��� 
    // ���ʿ� �����ʹ� ���⶧���� ���� �����͸� �������ִ� ������ �ʿ�
	if (i > middle) { // i�� ���� ���̳��ٸ�  
		for(int t = j; t <= n; t++) { //���� j���� �ִ� ����  
			sorted[k] = a[t];
			k++;
		}
	} else { // j�� ���� ���� ���ٸ�  
		for(int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	// ���ĵ� �迭�� ���� 
	for(int t = m; t <= n; t++) {
		a[t] = sorted[t]; //������ �� �迭�� ���� ���� ���� �ִ� ���� 
	}
}

void mergeSort(int a[], int m, int n) {
	//ũ�Ⱑ 1���� ū ���
	if (m < n) {
		int middle = (m + n) / 2; // ���߾��� ������ ���
		mergeSort(a, m, middle); // �������� �������� ���� 
		mergeSort(a, middle + 1, n); // ���������� �������� ����  
		merge(a, m, middle, n); // ���ĵ� �迭�� ���߿� ��ħ  
	} 
}

int main(void) {
	int array[number] = {7, 6, 5, 8, 3, 5, 9, 1};
	mergeSort(array, 0, number - 1);
	for(int i = 0; i < number; i++) {
		printf("%d ", array[i]);
	}
	
}
