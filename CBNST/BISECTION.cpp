#include<stdio.h>
#include<math.h>
using namespace std;

float fun(float x)
{
	return (pow(x,3)-(4*x)-9);
}
int main()
{
	float a=2.0,b=3.0;
	int i=1;
	float x=(a+b)/2.0;
	do{
		printf("value at iteration x%d is %f\n ",i,x);
	
		if(fun(a)*fun(x)<0) b=x;
		else if(fun(x)*fun(b)<0) a=x;
		
		x=(a+b)/2.0;
		
		i++;
		
	}while(fabs(x-a)>=0.0001 || fabs(x-b)>=0.0001);
	
}
