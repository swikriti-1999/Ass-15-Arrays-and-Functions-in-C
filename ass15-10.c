#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100],lar=0;
    printf("\n enter value for no.of numbers you want to print ");
    scanf("%d",&n);
    printf("\n enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n entered number are : ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(lar<a[i])
        lar=a[i];
    }
    printf("\n");
    for(j=0;j<=lar;j++)
    {
        b[j]=0;
    }
    for(j=0;j<=lar;j++)
    {
        printf(" %d",b[j]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<=lar;j++)
        {
            if(a[i]==j)
            b[a[i]]++;
        }
    }
    printf("\n numbers represents frequency of arrays ");
        for(j=0;j<=lar;j++)
        {
            if(b[j]!=0)
            printf("\n %d = %d \n",j,b[j]);
        }


return 0;
}