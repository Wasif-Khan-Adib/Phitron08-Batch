#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int star = 1; // star shuru hocche 1 theke
    
    int space = n - 1; // space
    for (int i = 1; i <= n; i++) // for line
    {
        for (int k = 1; k <= space; k++) // first e space er jonno loop 
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // then for star loop
        {
            printf("*");
        }
        printf("\n");
        star = star + 2; // star 2 ta kore bartese, tai plus 2
        space--; // space (n-1) theke 1 kore komtese tai -1
    }
    return 0;
}