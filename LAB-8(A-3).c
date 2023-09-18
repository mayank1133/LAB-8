#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter your starting number:");
	scanf("%d",&i);
	printf("Enter your ending number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
	
}
