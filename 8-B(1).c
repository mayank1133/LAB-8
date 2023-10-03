//1. Print number and its square root for 0 to 9.

#include<stdio.h>
#include<math.h>
int main()
{
	float i=0,n=9,sq;
	while(i<=n)
	{
		printf("num is %f\n",i);
		sq=sqrt(i);
		printf("squre root:%f\n",sq);
		i+=1;
	}
	return 0;
}
