#include<stdio.h>
#define abs(a) (a>0?a:-a)
float f(float x)
{
	return (x*x*x-x*x+2);
}
float f1(float x)
{
	return (3*x*x-2*x);
}
void main()
{
	float x;
	printf("\nENTER INITIAL ROOT:\n");
	scanf("%f",&x);
	while(abs(f(x))>0.00001)
	{
		x+=-f(x)/f1(x);
		printf("\nf(%f)=%f",x,f(x));
	}
	printf("\nROOT is:%f",x);
}
