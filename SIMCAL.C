#include <stdio.h>

int main()
{
	int a,b;
	char op;

	printf("enter your first number:");
	scanf("%d",&a);

	printf("enter an operator(+,-,*,/):");
	scanf("%c",&op);

	printf("enter your second number:");
	scanf("%d",&b);

	switch(op)
	{
		case'+':
			printf("result=%d",a+b);
			break;
		case'-':
			printf("result=%d",a-b);
			break;
		case'*':
			printf("result=%d",a*b);
			break;
		case'/':
			if(b!=0)
				printf("result=%d",a/b);
			else
				printf("cannot divided by zero!");
			break;
		default:
			printf("invalid operator!");
	}
	return 0;
}