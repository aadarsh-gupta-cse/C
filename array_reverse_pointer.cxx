# include<stdio.h>
int main ()
{
	int arr[5],*ptr;
	ptr=arr;
	printf("Enter the number :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Reverse Order:\n");
	for(int i=4;i>=0;i--)
	{
		printf("%d\n",*(ptr+i));
	}
	return 0;
}