# include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num>0)
	{
		 printf("it is a positive number");
	}
	else {
		printf("it is a negative number ");
	}
	return 0;
}