# include <stdio.h>
# include<math.h>
int main()
{
	int n,original,remainder;
	int digits=0;
	double sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	original=n;
	int temp=n;
	
	while(temp>0)
	{
		digits++;
	   temp=temp/10;
	}
	temp=original;
	
	while(temp>0)
	{
		remainder=temp%10;
		sum=sum+pow(remainder,digits);
		temp=temp/10;
	}
	if((int)sum==original)
	{
		printf("It is Armstrong number\n");
	}
	else{
		printf("It is not Armstrong number\n");
	}
	return 0;
}