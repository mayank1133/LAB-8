#include<stdio.h>
void main()
{
	int a,i=0,even=0,odd=0;
	printf("Number a:");
	scanf("%d",&a);
	while(i<9)
	{
			i=i+1;
		if(a%2==0)
		{
			even=even+1;
		}
		else
		{
				odd=odd+1;
		}
		scanf("%d",&a);
	}
	printf("even count=%d\n",even);
	printf("odd count=%d",odd);
}