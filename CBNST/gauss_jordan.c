#include<stdio.h>
#include<math.h>
int n;

void upmat(float a[][n+1])
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
                printf("\n");
                 for(int i=0;i<n;i++)
                  {printf("\n");
                     for(int j=0;j<n+1;j++)
                        {
                         printf("%f ",a[i][j]);
                      }
                     }
                 }
            }
        }
}
void lowmat(float a[][n+1])
{
    for(int i=n;i>-1;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
               float ratio = a[i+1][j]/a[i][j];

               for(int k=j;k<n+1;k++)
               {
                 a[i][k] = a[i][k] - ratio*a[i+1][k];
               }
            printf("\n");
             for(int i=0;i<n;i++)
                  {printf("\n");
                     for(int j=0;j<n+1;j++)
                        {
                         printf("%f ",a[i][j]);
                      }
                 }
            }

        }
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
    lowmat(a);
    
}