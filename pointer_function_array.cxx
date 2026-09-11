# include<stdio.h>
int findsum(int *ptr,int n)
{
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum=sum+*(ptr+i);
	}
	return sum;
}
int main()
{
	int arr[5]={45,22,63,73,66};
	
	int total=findsum(arr,5);
	
	printf("Total sum=%d\n",total);
	
	return 0;
}
	
	