#include <stdio.h>
int main()
{
	char opt;
	int n1,n2;
	int res;
	
	printf("Enter the problem: ");
	scanf("%d%c%d",&n1,&opt,&n2);
	

	if(opt=='+')
	{
		res=n1+n2;
		printf("%d%c%d=%d",n1,opt,n2,res);
	}	
	else if(opt=='-')
	{
		res=n1-n2;
		printf("%d%c%d=%d",n1,opt,n2,res);
	}
	
	else if(opt=='*')
	{
		res=n1*n2;
		printf("%d%c%d=%d",n1,opt,n2,res);
	}
	
	else if(opt=='/')
	{
		res=n1/n2;
		printf("%d%c%d=%d",n1,opt,n2,res);
	}
	
else
	{
		printf("\n You have entered wrong inputs");
	}
	
	return 0;
}
