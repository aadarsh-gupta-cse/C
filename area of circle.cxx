# include <stdio.h>
int main()
{
	double radius,area;
	const double PI=3.14;
	printf("Enter the number:");
	scanf("%lf",&radius);
	area = PI * radius * radius;
	printf("Area of circle is :%lf", area);
	return 0;
}