#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float f;
	f=(y-x)/(x+y);
	return(f);
}
void main()
{
	float x0,y0,xn,y1,h;
	printf("\nENTER STARTING VALUE OF x:");
	scanf("%f",&x0);
	printf("\nENTER STARTING VALUE OF y:");
	scanf("%f",&y0);
	printf("\nENTER THE VALUE OF x AT WHICH y IS REQUIRED:");
	scanf("%f",&xn);
	printf("\nENTER STEP SIZE h:");
	scanf("%f",&h);
	do
	{
		printf("\nAT x=%f THE VALUE OF y=%f",x0,y0);
		y1=y0+(h*f(x0,y0));
		x0=x0+h;
		y0=y1;
	}while(x0<=xn);
}
