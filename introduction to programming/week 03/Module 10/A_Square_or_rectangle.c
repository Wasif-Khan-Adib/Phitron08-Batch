#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char w[1000001], h[1000001];
        scanf(" %s %s ", w, h);

        if (strcmp(w, h) == 0)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}