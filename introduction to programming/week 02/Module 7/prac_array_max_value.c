#include <stdio.h>
int main()
{
    int n;
    int INT_MIN;
    scanf("%d", &n);
    int ar[n], max = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    printf("%d", max);
    return 0;
}