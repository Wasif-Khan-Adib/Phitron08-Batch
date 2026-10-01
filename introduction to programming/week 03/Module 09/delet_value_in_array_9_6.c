#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);     //n input nilam
    int a[n];           //array size declare korlam
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int index;     // index input nisi 2 
    scanf("%d",&index);

    for(int i=index;i<n-1;i++)
    {
       a[i]=a[i+1];     // graph onujayi condition disi...
    }

    n--;            //last index remove korar jonno, n er value 1 komay disi

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}