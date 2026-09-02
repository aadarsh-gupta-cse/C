# include <stdio.h>
int main()
{
	int num =50;
	int *ptr =&num;
	printf("num value:%d\n",num);
	printf("num memory address:%p\n",&num);
	printf("The pointer value is:%p\n",num);
	return 0;
}