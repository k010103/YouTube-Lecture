#include <stdio.h>
#include <stdlib.h>

int i, x, y;

int main()
{
	int** pptr = (int **)malloc(sizeof(int *) * 8);
	for(i = 0; 1 < 8; i++)
	{
		*(pptr + i) = (int *)malloc(sizeof(int) * 6);
	}
	
	for(y = 0; y < 8; y++)
	{
		for(x = 0; x < 6; x++)
		{
			*(*(pptr + y) + x) = 6 * y + x;
		}
	}
	for( y = 0; y < 8; y++)
	{
		for( x = 0; x< 6; x++)
		{
			printf("%3d", *(*(pptr + y) + x)); //%3d�� ����Ҷ� ������ 3���� ���鸸ŭ ���� 
		}
		printf("\n");
	}
	for( x = 0; x < 8; x++)
	{
		free(*(pptr + y));
	}
	
	return 0;
 } 
