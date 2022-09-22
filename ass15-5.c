#include<stdio.h>
int adj(int n);
int main()
{
    int n,res;
    printf("\n enter the value for no.of number you want to print ");
    scanf("%d",&n);
    res=adj(n);
    printf("\n adjacent duplicate value is %d",res);
    return 0;
}
int adj(int n)
{
    int i,res,a[100];
    printf("\n enter %d values ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        res=a[i];
    }
    return res;
}