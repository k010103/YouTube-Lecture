#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // �� ���α׷������� ������ �������� �ʽ��ϴ� 
		{         // 2���� ��������� 28�� ���� ������ i�� 2�ϰ�� 28�� ���� 
			sum += 28;
		}
	
	    else if(i % 2 == 0) // i�� 2�� ����� ��� 30�� ���� ( �����δ� 2�� ����� ���� 31�ϱ��� �� ��쵵 ����) 
	    {
		    sum += 30;
	     } 
	    else 
	    {
	 	   sum += 31;
	    }
    }
	 return sum + day;
}

int main()
{
	int month, day;
	printf("������ ��¥�� �Է����ּ��� :"); 
	scanf("%d %d", &month, &day);
	printf("1�� 1�Ϻ��� �ش� ��¥������ �Ÿ��� %d�Դϴ�.",getDays(month, day));
	return 0;
}
