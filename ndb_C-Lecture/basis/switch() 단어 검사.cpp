#include <stdio.h>

//switch �� ����� �ܾ �˸´� �亯�� �ִ� ����
// case�� �������� : ��� , case�� ���ļ� ������ ��� ����  
// �ؿ� ����ã�� ���� ����. 
 

int main()
{
	char a;
	scanf("%c", &a);
	switch(a) {
		case 'D':
			printf("slowly~");
			break;
		case 'C':
			printf("run!");
			break;
		case 'B':
			printf("good!!");
			break;
		case 'A':
			printf("best!!!");
			break;
		default:
			printf("what?");
	}
	
	return 0;
}
/*
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch(a) {
		case 12:
		case 1:
		case 2:
		printf("winter");
		break;
		case 3:
		case 4:
		case 5:
		printf("spring");
		break;
		case 6:
		case 7:
		case 8:
		printf("summer");
		break;
		case 9:
		case 10:
		case 11:
		printf("fall");
	} 
	
	return 0;
}
*/
