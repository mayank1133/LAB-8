#include<stdio.h>
void main()
{
	int a,x=1,even=0,odd=0;
	printf("enter numnber:");
	scanf("%d",&a);
	while(x<=9)
	{
	    x=x+1;
	    if(a%2==0)
	    {
	        even++;
		}
		else
		{
			odd++;
		}
	}
}
