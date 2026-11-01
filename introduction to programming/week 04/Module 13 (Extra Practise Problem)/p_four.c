#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int alpha = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= alpha; j++)
        {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
        alpha++;
    }

    return 0;
}
