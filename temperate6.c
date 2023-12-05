#include<stdio.h>
main()
{
	int i,n,fac;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	for(i=1,fac=1; n>=i; n--)
	{
		fac=fac*n;
	}
	printf("factorial number = %d",fac);
}