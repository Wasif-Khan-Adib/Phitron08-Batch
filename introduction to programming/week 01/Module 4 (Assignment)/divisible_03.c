#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    if (n % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}