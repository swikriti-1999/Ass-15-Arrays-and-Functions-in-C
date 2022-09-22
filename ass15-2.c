#include<stdio.h>
int small(int n);
int main()
{
    int n,res;
    printf("\n enter the value for no.of numbers you want ");
    scanf("%d",&n);
    res=small(n);
    printf("\n the greatest value is %d",res);
    return 0;
}
int small(int n)
{
    int a[n],i,small=0;
    printf("\n enter %d value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        small=a[0];
    }
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        small=a[i];
    }
    return small;
}