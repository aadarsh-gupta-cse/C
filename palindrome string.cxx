# include<stdio.h>
int main()
{
	char str[100],rev[100];
	int length=0,flag=1;
	printf("Enter the value:");
	scanf("%s",str);
	
	while(str[length]!='\0')
	{
		length++;
	}
	for(int i=0;i<length;i++)
	{
		rev[i]=str[length-i-1];
	}
	rev[length]='\0';
	for(int i=0;i<length;i++)
	{
		if(str[i]!=rev[i])
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("This is a palindrome string\n");
	}
	else{
		printf("This is not palindrome string\n");
	}
	return 0;
}
	