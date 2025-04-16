#include<stdio.h>
#include<math.h>
#define f(x) x*x*x +x*x -3*x-3
#define g(x) 3*x*x + 2*x -3

int main()
{
	float x0, x1, f0,f1, g0, e;
	int SN=1;
	printf("\nEnter error criteria:");
	scanf("%f",&e);
	printf("\nEnter initial guess:");
	scanf("%f",&x0);
		printf("\nS.N\t\tx0\t\t\tx1\t\t\tf(x0)\t\t\tf(x1)");
	do
	{
		f0=f(x0);
		g0=g(x0);
		x1=x0-(f0/g0);
		f1=f(x1);
		printf("\n%d\t\t%f\t\t%f\t\t%f\t\t%f",SN,x0,x1,f0,f1);
		x0=x1;
		SN++;
	}while(fabs(f1)>e);
	printf("\n\n Required Root is : %f",x1);
}
