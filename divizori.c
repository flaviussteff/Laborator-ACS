#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	for (int i=1;i*i<=x;i++)
	{
		int h=x/i;
		if (i*i==x) printf("%d \n",i);
		else if (x%i==0) printf("%d si %d \n",i,h);
	}
	return 0;
}
