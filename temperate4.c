#include<stdio.h>
main()
{
	int i,sum,n,fd,ld;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	ld=n%10;
	while(n>=10)
	{
	   	n=n/10;
		
	}
	fd=n;
	sum=fd+ld;
	printf("Sum of first & last Digit = %d",sum);
	
	
}