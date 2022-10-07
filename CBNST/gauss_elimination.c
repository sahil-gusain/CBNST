#include<stdio.h>
#include<math.h>
int n;

void upmat(float a[][n+1])
{
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>i)
                {
                    float ratio=a[j][i]/a[i][i];

                    for(int k=0;k<n+1;k++)
                    {
                        a[j][k] -=(ratio*a[i][k]);
                    }

                    // printf("the intermediate matrix \n");
                    // for(int i=0;i<n;i++)
                    //  {printf("\n");
                    //     for(int j=0;j<n+1;j++)
                    //     {
                    //         printf("%f ",a[i][j]);
                    //      }
                     }
                 }
            }
        }
}

void  bcksub(float a[][n+1],float value[])
{
    value[n-1]=a[n-1][n]/a[n-1][n-1];
    
    for(int i=n-2;i>=0;i--)
    {
        float sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=a[i][j]*value[j];
        }
        value[i] = (a[i][n] - sum)/a[i][i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%f\n",value[i]);
    }

}

int main()
{
    printf("enter the total no of variable \n");
    scanf("%d",&n);
    float a[n][n+1],value[n];

    printf("enter the augmented matrix \n");

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n+1;j++)
        {
            scanf("%f",&(a[i][j]));
        }
    }
    upmat(a);
    bcksub(a,value);
    
}