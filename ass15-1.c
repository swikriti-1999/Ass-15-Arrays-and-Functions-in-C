#include<stdio.h>
int lar(int n);
int main()
{
    int n,res;
    printf("\n enter the value for no.of numbers you want ");
    scanf("%d",&n);
    res=lar(n);
    printf("\n the greatest value is %d",res);
    return 0;
}
int lar(int n)
{
    int a[n],i,lar=0;
    printf("\n enter %d value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(lar<a[i])
        lar=a[i];
    }
    return lar;
}