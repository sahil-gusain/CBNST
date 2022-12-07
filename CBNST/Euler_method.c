#include<stdio.h>

float fun(float x0,float y0)
{
    return x0+y0;
}
int main()
{
    float h,x0,y0,x;
    int  i=1;
    printf("enter the initial values(x,y) and h\n");
    scanf("%f %f %f",&x0,&y0,&h);
    printf("enter the final value\n");
    scanf("%f",&x);
    while(x0<x)
    {
        y0=y0+h*fun(x0,y0);
        printf("value of y%d : %f\t",i,y0);
        x0=x0+h;
        printf("x%d : %f\n",i,x0);
        i++;
    }
}

