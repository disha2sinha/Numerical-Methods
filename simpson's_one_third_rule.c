#include<stdio.h>
#include<math.h>
float f(float x)
{
	return log(x);
}

void main()
{
	float a,b,sum=0,h;
	int i,n;
	printf("\nENTER LOWER LIMIT:\n");
	scanf("%f",&a);
	printf("\nENTER UPPER LIMIT:\n");
	scanf("%f",&b);
	printf("\nENTER NO. OF INTERVALS:\n");
	scanf("%d",&n);
	h=(b-a)/n;
	printf("\n\nLOWER LIMIT(a):%f\nUPPER LIMIT(b):%f\nNO. OF INTERVALS(n):%d\nSTEP SIZE(h):%f\n\n",a,b,n,h);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			sum+=2*f(a+i*h);
		}
		else
		{
			sum+=4*f(a+i*h);
		}
		printf("\nSTEP=%d\t\ta=%f\t\tsum=%f\t\tf(a)=%f\n",i,a+i*h,sum,f(a+i*h));
	}
	sum=h/3*(sum+f(a)+f(b));
	printf("\nRESULT:%f",sum);
}
