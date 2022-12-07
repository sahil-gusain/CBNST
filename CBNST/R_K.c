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
        float k1=h*fun(x0,y0);
        float k2=h*fun(x0+(h/2),y0+(k1/2));
        float k3=h*fun(x0+(h/2),y0+(k2/2));
        float k4=h*fun(x0+h,y0+k3);
         y0=y0+(k1 +2*k2 +2*k3 +k4)/6.0;
         printf("k1 : %f\t k2 : %f\t k3:%f\t k4:%f\n",k1,k2,k3,k4);
         printf("value of y%d : %f\t",i,y0);
         x0=x0+h;
         printf("x%d : %f\n",i,x0);
        i++;
    }
}

