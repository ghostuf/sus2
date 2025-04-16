#include<stdio.h>
#include<math.h>
#define f(x) x-cos(x)

int main()
{
	float x1,x2,x0, f1,f2,f0,e;
	int Sn=1;
	printf("\nTHIS CODE IS RUN BY XYZ\n");
	printf("\nEnter the error criteria:");
	scanf("%f",&e);
	up:
	printf("\n Enter two initial guesses: ");
	scanf("%f%f",&x1,&x2);
	f1=f(x1);
	f2=f(x2);
	if((f1*f2)>0)
	{
		printf("\n Wrong Intial GUesses");
		goto up;
	}
	printf("\nSN\t\t\tx1\t\t\tx2\t\t\tx0\t\tf(x0)");
	do
	{
		x0=(x1+x2)/2;
		f0=f(x0);
		printf("\n%d\t\t\t%f\t\t%f\t\t%f\t\t%f",Sn,x1,x2,x0,f0);
		if((f0*f1)<0)
		{
			x2=x0;
			f2=f0;
		}
		else
		{
			x1=x0;
			f1=f0;
		}
		Sn++;
	}while(fabs(f0)>e);
	printf("\n Required root = %f", x0);
}	
