#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int n;
bool appl(float augmat[][n+1])
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum+=augmat[i][j];
            }
        }
        if(sum>augmat[i][i]) return false;
    }
    return true;
}
int main()
{
    printf("enter the no of variable\n");
    scanf("%d",&n);
    float value[n],augmat[n][n+1];

    printf("enter the of value of aug matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&(augmat[i][j]));
        }
    }
    if(!appl(augmat))
    {
        printf("siedal is not applicable\n");
        return 0;
    }
    printf("enter the extimated value\n");
    for(int i=0;i<n;i++)
    {
        float a;
        scanf("%f",&a);
        value[i]=a;
    }
    int flag,itr=0;
    do{
        itr+=1;
        flag=0;
        for(int i=0;i<n;i++)
        { 
            float sum=0,x;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    sum+=value[j]*augmat[i][j];
                }
            }
            x=(augmat[i][n]-sum)/augmat[i][i];
            

            if(fabs(x)-fabs(value[i]) <=0.0001) flag++;
            value[i]=x;
            
        }
        printf("value at iteration %d\n",itr);
            for(int i=0;i<n;i++)
            {
                printf("%f\n",value[i]);
            }
    }while(flag!=n);
}
