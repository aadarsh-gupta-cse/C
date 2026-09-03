# include<stdio.h>
int product(int a, int b)
{
	int sum = a*b;
	return sum;
	} 
int main()
{
	int i=40,j=90;
	int answer;
	answer = product(i,j);
	printf("Total answer is:%d\n",answer);
	return 0;
}