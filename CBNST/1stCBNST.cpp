#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	printf("enter the value of X \n");
	scanf("%f",&x);
	int temp = (int)(x*10000);
	y= (float) temp/10000;
	printf("absolute error %f \n",fabs(x-y));
	printf("relative error %f \n",fabs((x-y)/x));
	printf("percentage error %f \n",fabs((x-y)/x) *100);	
	printf("%f",y);	
}
