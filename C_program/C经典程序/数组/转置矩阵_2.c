#include <stdio.h>
int main(void)
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j;
	
	printf("array a:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	printf("array b:\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<3;j++)
			printf("%5d",a[j][i]);
		printf("\n");
	}
	
	return 0;
}