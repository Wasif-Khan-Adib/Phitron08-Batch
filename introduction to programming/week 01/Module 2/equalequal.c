#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n%2 == 0)
    {
        printf("This a even number");// even মানে জোড় সংখ্যা
    }
    else
    {
        printf("This an odd number");// odd মানে বিজোড় সংখ্যা
    }
    return 0;
}