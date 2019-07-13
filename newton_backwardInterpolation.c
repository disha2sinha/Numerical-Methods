#include<stdio.h>
int fact(int n){
	if(n==1)
	{
		return(1);
	}
	else{
		return(n*fact(n-1));
	}
}
void main()
{
	float a[20][20],sum=0,u,h,x,temp=1;
	int i,j,n;
	printf("\n HOW MANY NUMBERS?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nENTER x VALUES:\n");
		scanf("%f",&a[i][0]);
		printf("\nENTER y VALUES:");
		scanf("%f",&a[i][1]);
	}
	printf("\nENTER NUMBER:\n");
	scanf("%f",&x);
	h=a[1][0]-a[0][0];
	u=(x-a[n-1][0])/h;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[j][i+1]=a[j+1][i]-a[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if((i+j-1)<n)
			{
				printf("%f\t",a[i][j]);
			}
		}
	}
	sum=a[n-1][1];
	for(i=1;i<n;i++)
	{
		temp*=(u+i-1);
		sum+=temp/fact(i)*a[n-i-1][i+1];
	}
	printf("\nf(%f)=%f",x,sum);
}
