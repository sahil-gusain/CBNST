#include<stdio.h>
#include<math.h>


float fun(float x,int x1,int x2,int x3)
{
	return (pow(x,x1)-(x2*x)-x3);
}
int main()
{   int m,n,x1,x2,x3;
    float a,b;
    
    printf("enter the coefficient ");
    scanf("%d %d %d",&x1,&x2,&x3);
 
	printf("enter the range ");
	scanf("%d %d",&m,&n);
	for(float i=m;i+1<n;i++){
		if(fun(i,x1,x2,x3)*fun(i+1,x1,x2,x3)<0)
		{
			a=i;
			b=(i+1);
			break;
		}
	}
	printf("a is %f and b is %f\n",a,b);
	int i=1;
	float x=(a+b)/2.0;
	do{
		printf("value at iteration x%d is %f\n ",i,x);
	
		if(fun(a,x1,x2,x3)*fun(x,x1,x2,x3)<0) b=x;
		else if(fun(x,x1,x2,x3)*fun(b,x1,x2,x3)<0) a=x;
		
		x=(a+b)/2.0;
		
		i++;
		
	}while(fabs(x-a)>=0.0001 || fabs(x-b)>=0.0001);
	
}

