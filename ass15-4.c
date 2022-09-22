#include<stdio.h>
void rotate(int x,int n,int d);
int main()
{
    int n,x,d;
    printf("\n enter a value for no.of no. you want to print");
    scanf("%d",&x);
    printf("\n enter the value to be shifted");
    scanf("%d",&n);
    printf("\n enter the direction you want to rotate");
    printf("\n 1. to shift left enter : 1\n 2. to shift right enter : 0");
    scanf("%d",&d);
    rotate(x,n,d);
    return 0;
}
void rotate(int x,int n,int d)
{
    int i,a[100],j,temp=0;
    if(d==1)
    {
        printf("\n enter %d value",x);
        for(i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\n entered calues are: ");
        for(i=0;i<x;i++)
        {
            printf(" %d",a[i]);
        }
        for(i=0;i<x+n;i++)
        {
            if(i<n)
            {
                a[x+n-n+i]=a[i];
            }
            else
            a[i-n]=a[i];
        }
        printf("\n rotated left shift array is: ");
        for(i=0;i<x;i++)
        {
            printf(" %d",a[i]);
        }

    }
    else
    if(d==0)
    {

        printf("\n enter %d value",x);
        for(i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\n entered calues are: ");
        for(i=0;i<x;i++)
        {
            printf(" %d",a[i]);
        }
        for(j=1;j<=n;j++)
        {
            for(i=x-1;i>=0;i--)
            {
                if(i==x-1)
                temp=a[i];
                else
                a[i+1]=a[i];
            }
            a[0]=temp;
        }
        printf("\n rotated right shift array is: ");
        for(i=0;i<x;i++)
        {
            printf(" %d",a[i]);
        }   
    }
    else
    printf("\n wrong input");
    
}