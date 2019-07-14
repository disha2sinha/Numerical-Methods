#include<stdio.h>
int main()
{
	float x[20],y[20],sum=0,x1,temp=1;
	int i,j,n;
	printf("\n HOW MANY NUMBERS?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER x VALUES:\n");
		scanf("%f",&x[i]);
		printf("\nENTER y VALUES:");
		scanf("%f",&y[i]);
	}
	printf("\nENTER NUMBER:\n");
	scanf("%f",&x1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				continue;
			}
			temp*=(x1-x[j])/(x[i]-x[j]);
		}
		sum+=temp*y[i];
		printf("t=%f\ts=%f\n",temp,sum);
		temp=1;
	}
	printf("\nf(%f)=%f",x1,sum);
}
