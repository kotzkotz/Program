#include <stdio.h>
int main(void)
{
	int num[50];
	int *p,i,k,m,n;
	
	printf("请输入总人数：");
	scanf("%d",&n);
	p = num;
	for (i=0; i<n; i++)
		*(p+i) = i + 1;
	i = 0;
	k = 0;
	m = 0;
	while (m<n-1)
	{
		if (*(p+i) != 0)
			k++;
		if (k == 3)
		{
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;
	}
	while (*p == 0)
		p++;
	printf("最后留下来的是原来的第 %d 号。\n",*p);
	
	return 0;
}