//multiple of 3;
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

    int n=b-a/h,j=1;
    float sum=fun(a)+fun(b);
    printf("integral table\n");
    printf("%f  %f\n",a,fun(a));
    float i=a+h;

    while(j<n){
    
       printf("%f  %f\n",i,fun(i));
       if(j%3==0)  sum+=2*fun(i);
       else sum+=3*fun(i);
       i+=h;
       j++;
    }
    printf("%f  %f\n",b,fun(b));
    sum=3*(h*sum)/8;
    printf("value of the integral is %f",sum);

}
