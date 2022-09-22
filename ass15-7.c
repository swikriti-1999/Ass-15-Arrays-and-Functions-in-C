#include<stdio.h>
int adj(int n);
int main()
{
    int n,res;
    printf("\n enter the value for no.of number you want to print ");
    scanf("%d",&n);
    res=adj(n);
    printf("\n no.of adjacent duplicate value is %d",res);
    return 0;
}
int adj(int n)
{
    int i,count=0,a[100],j;
    printf("\n enter %d values ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
    }
    return count;
}