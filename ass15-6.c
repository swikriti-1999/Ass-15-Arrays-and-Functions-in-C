#include<stdio.h>
void rev(int n);
int main()
{
    int n;
    printf("\n enter the no of no. you want to print ");
    scanf("%d",&n);
    rev(n);
    return 0;
}
void rev(int n)
{
    int i,a[100],j,temp=0;
    printf("\n enter %d value",n);
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
    printf("\n array in reverse order ");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",a[i]);
    }
}
