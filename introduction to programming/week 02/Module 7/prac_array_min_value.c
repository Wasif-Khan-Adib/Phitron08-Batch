#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    INT_MAX;
    scanf("%d", &n);
    int ar[n], min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    printf("%d", min);
    return 0;
}