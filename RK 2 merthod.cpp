//Problem y' = x+sqrt(y), y(0) = 1 , h= 0.2 , y(0.6)=?  Ans: 1.881930
#include <stdio.h>
#include <math.h>
#define f(x,y) (2*y)/x
int main() {
    float x0, y0, h, xn, x, y, k1, k2, k, x1, y1;
    int n;
    printf("Enter Initial Condition\n");
    printf("Enter x0, y0,  	xn,	h = ");
    scanf("%f%f%f%f", &x0,&y0,&xn,&h);
     n = (xn - x0) /h;
    
       for (int i = 0; i < n; i++) {
        k1 = f(x0, y0);
        k2 = f(x0 + h, y0 + k1*h);
        k = 0.5 * (k1 + k2);
        y1 = y0 + (k*h);
        x1 = x0 + h;
        x0 = x1;
        y0 = y1;
        printf("\nValue of y(%f) = %f",x0,y0);
    }
    printf("\n\n Therefore, value of y at x = %0.2f is %f",x1, y1);
    return 0;
}

