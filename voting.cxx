# include <stdio.h>
int main()
{
	int age;
	printf("Enter the number:");
	scanf("%d",&age);
	if(age<18)
	{
		printf("Sorry you are not allow for vote ");
	}
	else if(age>18)
	{
		printf("You are allow for vote");
	}
	return 0;
}
	