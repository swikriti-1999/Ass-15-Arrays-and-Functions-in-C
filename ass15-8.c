#include <stdio.h>
void uniq(int n);
int main()
{
    int n;
    printf("\n enter the no. of value you want to print ");
    scanf("%d", &n);
    uniq(n);
    return 0;
}
void uniq(int n)
{
    int i, j, a[100], count, k;
    printf("\n enter %d value ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n unique numbers in array are : ");
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        for (k = i ; k >= 0; k--)
        {
            if (a[i] == a[k - 1])
                count++;
        }

        if (count == 0)
            printf(" %d", a[i]);
    }
}