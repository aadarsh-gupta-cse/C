# include <stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("This is Prime number\n",n);
	}
	else{
		printf("This is not Prime number\n",n);
	}
	return 0;
}