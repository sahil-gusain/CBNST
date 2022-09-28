#include<stdio.h>
#include<math.h>

float dg(float x)
{
	return (4*x)/(3*pow((2*x*x +4),0.66667)) ;
}
float gx(float x)
{
    return pow(2*x*x +4,0.33333);
}

int main()
{
    float a,b;
    printf("enter the value of a,b\n");
    scanf("%f %f",&a,&b);

    while(fabs(dg(a))>1 || fabs(dg(b))>1)
    {
        printf("enter the correct values of a and b");
        scanf("%f %f",&a,&b);
    }
   float x0=(a+b)/2; 
   int i=1;  
    do
    {
        float ans=gx(x0);
        printf("value at iteration %d is %f\n",i,x0);
        if(fabs(ans-x0)<=0.0001) break;

        x0=ans;
        i++;
     } while (1);
 
	
}
