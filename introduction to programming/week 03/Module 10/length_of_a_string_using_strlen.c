#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);

    int size = strlen(s); // string er length ber korar jonno strlen ekta build in function

    printf("%d",size);

    return 0;
}