#include <stdio.h>
#define N 20

int main()
{
	int i,j;
	for( i = 0; i<N; i++)
	{	
		for(j = N - i; j < N; j++)
		{
		printf("  ");
		}
		for(j= N - i ; j > 0 ; j--)
		{
			printf("��");
		}
		for(j= N -i -1; j > 0; j--)
		{
			printf("��");
		}
	    printf("\n"); 
	}
	return 0;
}
