#include <stdio.h>
int main(void)
{
	int i,f[20]={1,1};
	for (i=2;i<20;i++)
		f[i]=f[i-2]+f[i-1];
	for (i=0;i<20;i++)
	{
		if (i%5==0)
			printf("\n");
		printf("%5d",f[i]);
	}
	printf("\n");
	return 0;
}