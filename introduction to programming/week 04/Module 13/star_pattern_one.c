#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++) //for printing line
    {
        for(int j=1;j<=n;j++) //for printing line
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}