//triangle is possible or not
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three sides of a triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		printf("The triangle is possible\n");
		if(a==b==c)
		{
			printf("Equilateral Triangle");
		}
		else if(a==b||b==c||c==a)
		{
			printf("Isosceles Triangle");
		}
		else
		{
				printf("Scalene Triangle");
		}
	}
	else
	{
		printf("Triangle Not Possible");
	}
}
