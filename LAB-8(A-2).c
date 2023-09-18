#include<stdio.h>
void main()
{
	int n,i=1;
	printf("Enter how many integers do you want:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i=i+2;
	}
	
}
