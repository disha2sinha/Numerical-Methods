#include<stdio.h>
#include<math.h>
float f(float x)
{
	float f;
	f=tan(x)+tanh(x);
	return (f);
}
void main()
{
	float x1,x2,x0,e,n;
	int k;
	printf("\nENTER ACCURACY:\n");
	scanf("%f",&e);
	
	do
	{
		printf("\nENTER INTERVAL x0:\n");
		scanf("%f",&x0);
		printf("\nENTER INTERVAL x1:\n");
		scanf("%f",&x1);
	}while(f(x0)*f(x1)>0.0);
	
	k=0;
	do
	{
		x2=x0-((f(x0)*(x1-x0))/(f(x1)-f(x0)));
		printf("\nl=%d\t\tx0=%f\t\tx1=%f\t\tx2=%f\t\tf(x2)=%f\n",k+1,x0,x1,x2,f(x2));
		if(f(x0)*f(x2)<0.0)
		{
			x1=x2;
		}
		else
		{
			x0=x2;
		}
		k=k+1;
	}while(fabs(f(x2))>=e);
	printf("\nROOT OF THE EQUATION:%f",x2);
	printf("\nACTUAL NO. OF ITERATIONS REQUIRED=%d",k);
}

