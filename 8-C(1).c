//1. Calculate the square of integers 1 through 10.

#include<stdio.h>
void main()
{
	double i=1,n,sq;
	printf("enter a n:");
	scanf("%lf",&n);
    while(i<=n)
	{
		sq=i*i;
		printf("squre is :%lf\n",sq);
		i++;
	}
	
}
