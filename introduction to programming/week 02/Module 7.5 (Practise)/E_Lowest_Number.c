#include <stdio.h>
#include <limits.h>
int main()
{
    int n;

    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // searching
    INT_MAX;
    int min = INT_MAX;
    int min_index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_index=i+1;
        }
    }
    printf("%d %d", min, min_index);
    return 0;
}