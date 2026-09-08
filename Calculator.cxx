# include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	printf("Additional = %.2f\n",a + b);
	printf("Substraction = %.2f\n",a - b);
	printf("Multiplication = %.2f\n",a * b);
	printf("Divide = %.2f\n",a / b);
	return 0;
}