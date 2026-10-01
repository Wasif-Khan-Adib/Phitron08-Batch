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

    int min = INT_MAX; // 1st ei limits header file ta nite hobe
    int min_index = 0; // min idx input niye tar value -1 or 0 rakhte hobe, noyto garbaze asbe
    for (int i = 0; i < n; i++)
        
    {
        if (a[i] < min)
        {
            min = a[i]; // min value ber korlam
            min_index = i; // min value ta min index e rakhlam
        }
    }

    int max= INT_MIN; // max ke minimum dhore nilam 
    int max_index= 0; // max index er man 0 nilam
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i]; // max value ber korlam 
            max_index=i; // max value ta max index e rakhlam
        }
    }
    
    a[min_index]=max; // max value min index e dilam
    a[max_index]=min; // min value max index e dilam 

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}