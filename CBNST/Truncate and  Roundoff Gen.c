#include<stdio.h>
double truncated(float a,int n)
{
	int m=10;
	for(int i=1;i<n;i++)
	{
	    m=m*10;
		}
	int b=a*m;
	
	float c= ((float)b/m);
	return c;
}
void roundoff(float a,int n)
{
	int m=10;
	for(int i=1;i<n;i++)
	{
		m=m*10;
	}
	int b=a*m;
	int c=b%10;
	if(c>5)
	{
	  printf("%f",truncated(a,n-1)+0.0001);
   }
   else
   {
   truncated(a,n-1);
}
}
int main()
{
	float a=0.45419744874;
	int n;
	printf("enter the no.of digit you want to truncate");
	scanf("%d",&n);
	printf("%f\n",truncated(a,n));
	roundoff(a,n+1);
}

