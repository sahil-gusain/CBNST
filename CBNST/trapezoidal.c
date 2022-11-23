#include<stdio.h>

float fun(float x)
{
    return 1/(1+x*x);
}
int main()
{
    float a,b,h;
    printf("enter the lower limit,upper limit and h\n");
    scanf("%f %f %f",&a,&b,&h);

    int n=b-a/h;
    float sum=fun(a)+fun(b);
    printf("integral table\n");
    printf("%f  %f",a,fun(a));
    for(float i=a+h;i<b;i=i+h)
    {
        printf("%f  %f\n",i,fun(i));
        sum+=2*fun(i);
    }
    printf("%f  %f\n",b,fun(b));
    sum=(h*sum)/2;
    printf("value of the integral is %f",sum);

}