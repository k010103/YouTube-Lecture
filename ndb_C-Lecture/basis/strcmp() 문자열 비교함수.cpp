#include <stdio.h> 
#include <string.h>

// strcmp() ���ڿ� ���Լ� 

int main(void) 
{
	char inputOne[5] = "B";
	char inputTwo[5] = "A";
	printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo));
	return 0;
}
//           ��       ��  
// strcmp(inputOne, inputTwo) �տ� �ִ°��� ���������� �տ� �ִٸ� -1 ���  strcmp(A, B) = -1
//                            �ڿ� �ִ°��� ���������� �տ� �ִٸ�  1 ���  strcmp(B, A) =  1
//                            �հ� �ڿ� ������ ��ġ�� ���ٸ� 0 ���         strcmp(A, A) =  0
