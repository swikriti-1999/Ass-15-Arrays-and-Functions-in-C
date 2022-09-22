#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j=0,n,temp=0;
    printf("\n enter the value for no.of number you want ot print ");
    scanf("%d",&n);
    printf("\n enter %d value for first array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter %d value for second array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            c[j]=a[i];
            c[++j]=b[i];
            j++;
        }
        else
        {
            c[j]=b[i];
            c[++j]=a[i];
            j++;
        }
    }
    printf("\n merge is : ");
    for(j=0;j<n+n;j++)
    {
        printf(" %d",c[j]);
    }
    for(j=0;j<n+n;j++)
    {
        for(i=j+1;i<n+n;i++)
        {
            if(c[j]>c[i])
            {
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }
    printf("\n merge array after sorted : ");
    for(j=n+n-1;j>=0;j--)
    {
        printf(" %d",c[j]);
    }
return 0;
}