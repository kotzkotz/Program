#include <stdio.h>
int main(void)
{
	int i=100; int j=200; int k=300;
	int b[3][5]={{31,32,33,24,25},{16,17,8,9,10},{19,11,51,14,15}};
	
	printf("&i=%X	&j=%X	&k=%X\n",&i,&j,&k);
	printf("b=%X	b+1=%X	b+2=%X\n",b,b+1,b+2);
	printf("b[0]=%X	b[0]+1=%X	b[0]+2=%X\n",b[0],b[0]+1,b[0]+2);
	printf("b[1]=%X	*(b+1)=%X	&b[1][0]=%X\n",b[1],*(b+1),&b[1][0]);
	printf("b[2][4]=%d	*(*(b+2)+4)=%d\n",b[2][4],*(*(b+2)+4));
	
	return 0;
}	