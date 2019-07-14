#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float f;
	f=x+y;
	return (f);
}
void main()
{
	float x0,y0,xn,y1,h,k1,k2,k3,k4,k;
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
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2,y0+k1/2);
		k3=h*f(x0+h/2,y0+k2/2);
		k4=h*f(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6.0;
		y1=y0+k;
		printf("\nAT x=%f THE VALUE OF y=%f",x0,y0);
		y0=y1;
		x0=x0+h;
	}while(x0<=xn);
}
