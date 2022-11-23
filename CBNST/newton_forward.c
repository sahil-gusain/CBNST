#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF TERMS : ");
	scanf("%d",&n);
	float x[n],y[n][n];
    printf("ENTER THE  VALUE OF X and Y\n");
	for(int i=0;i<n;i++){
		scanf("%f",&x[i]);
		scanf("%f",&y[i][0]);		
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			y[j][i]=y[j+1][i-1]- y[j][i-1];
		}
	}
	for(int i=0;i<n;i++){
		printf("%f",x[i]);
		for(int j=0;j<n-i;j++){
			printf("\t %f",y[i][j]);
		}
		printf("\n");
	}
	float h=x[1]-x[0];
	printf("h = %f\n",h);
	float given;
	printf("ENTER THE VALUE IN WHICH WE HAVE TO FIND F(X)");
	scanf("%f",&given);
	float u=(given-x[0])/h;
	printf("u = %f\n",u);
	int factorial=1;
	float ans=y[0][0];
	float u1=u;
    for(int j=0;j<n;j++){
		ans=ans + (u1*y[0][j]) / factorial;
		u1 = u1 * (u1-1);
		factorial=factorial*(j+1);
	}
	printf("ANSWER IS %f",ans);
    return 0;
}