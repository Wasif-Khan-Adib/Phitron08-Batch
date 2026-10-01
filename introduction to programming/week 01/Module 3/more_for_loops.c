#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i=i+2)
    //(int i=2;i<=100;i=i+2)-জোড়ের কনডিশন
    //(int i=1;i<=100;i=i+2)-বিজোড়ের কনডিশন
    {
        printf("%d\n",i);
    }
    return 0;
}