#include<stdio.h>
double truncated(float a)
{
	
	int b=a*10000;
	
	float c= ((float)b/10000);
	return c;
}
void roundoff(float a)
{
	int b=a*100000;
	int c=b%10;
	if(c>5)
	{
	  printf("%f",truncated(a)+0.0001);
   }
   else
   {
   truncated(a);
}
}
int main()
{
	float a=0.45419744874;
	
	printf("%f\n",truncated(a));
	roundoff(a);
}
