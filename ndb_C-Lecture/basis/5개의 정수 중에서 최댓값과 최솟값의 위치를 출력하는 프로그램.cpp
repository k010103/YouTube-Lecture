#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void)
{
	int i, max, min, index; // i=�迭 ��ġ, max=�ִ�, min=�ּڰ�, index= ���� ��ġ 
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : �� 5���� �� �� �ִ� ũ���� �迭 ���� 
	// array[0] = 30, array[1] = 23, array[2] = 31, array[3] = 73, array[4] = 83 -> �� 5�� 
	for(i = 0; i < NUMBER; i++) // NUMBER�� 5�̹Ƿ� 5�� ����( �迭�� 5��) 
	{
		scanf("%d", &array[i]);
		if(max < array[i]) //max�� ���� ���� ������ ������ ũ�ٸ� �Ʒ� �� ���� (�ʱ⿡ ������ ���� 0�̱⶧���� array[0]��°�� ���� ó������ �ִ����� ����  
		{
			max = array[i]; //max�� ���� ������ ������ �ٲٰ�, 
			index = i;     //index�� ���� ���� ��ġ(i)��  ���� 
		}
	 } 
	 printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index +1 ); // �迭�� 0���� ������ �ϱ⶧���� +1�� �ٿ��� �´� ���� ����  
	 min = INT_MAX; //int���߿� ���� ū �� 2��~~ 
	 for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i]) // INT_MAX�� �� �����Ƿ� array[0]��° ���� ó������ �ּڰ����� ���� 
		{
			min = array[i]; //���� �Ȱ��� min�� ���� ���翡 �ִ�(?)�������� ������ �ٲٰ�, 
			index = i;     // index�� ������ ��ġ�� ���� 
		}
	 } 
	 printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index +1 ); // index�� +1�� �ؾ����� �츮�� �ƴ� ������ ���� (���� ���� ) 
	 
	return 0;
}

