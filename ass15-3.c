#include<stdio.h>
void sort(int n);
int main()
{
    int n;
    printf("\n enter the value for no.of no. you weant ");
    scanf("%d",&n);
    sort(n);
    return 0;
}
void sort(int n)
{
    int i,a[n],j,temp=0;
    printf("\n enter the %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n sorted array is ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}