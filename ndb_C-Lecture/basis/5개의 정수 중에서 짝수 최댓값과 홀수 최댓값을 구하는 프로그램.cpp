#include <stdio.h>
#define NUMBER 5

int main(void)
{

	int array[NUMBER];
	int i, oddMax, evenMax;
	oddMax = 0;
	evenMax = 0;
	printf("5���� ����� �Է����ּ��� :"); //�Է� ������ ��������� for�� �����ٰ� ���� �ؿ� ������ ������ �ȵ� 
	for(i=0; i<NUMBER; i++)
	{
	
	    scanf("%d", &array[i]);
	    if(array[i] % 2 == 0) // �迭 i���� 2�� ���������ٸ� ����  
	    {
		    if(evenMax < array[i]) // �� �Լ����� �ִ밪�ϰ�쿡�� ���� array[0]��° ���� ó������ ������ �ִ����� �����Ǵ� ����  
		    {                     // -> ���ذ� �ȵǸ� 5���� �����߿��� �ִ񰪰� �ּڰ��� ��ġ��� Ȯ�� 
		    	evenMax = array[i];
		    }
	    }
		else // i�� ���� 2�� ���������� ������ �ؿ� ���� ����  
		{
			if(oddMax < array[i]) //������ ���� 
			{                    // ��Ȧ���� �ִ��� ���ϴ� ���̹Ƿ� ������ ������ �ٲ� �ʿ䰡 ����         
				oddMax = array[i];
			}
		}
	}
	
	printf("5���� ���� �߿� ¦�� �ִ��� %d�̰� Ȧ�� �ִ��� %d�Դϴ�.", evenMax, oddMax);
	return 0;
}
