#include<stdio.h>
main()
{
	int s,ans=0,tamp,n;
	
	printf(" Enter Value N = ");
	scanf("%d",&n);
	tamp=n;
	
	while(n!=0)
	{
		s=n%10;
		ans=ans*10+s;
		n=n/10;
	}
	
	if(tamp==ans)
	{
		printf(" %d is palindrome",ans);
	}
	else
	{
		printf(" %d is not palindrome",ans);
	}
}