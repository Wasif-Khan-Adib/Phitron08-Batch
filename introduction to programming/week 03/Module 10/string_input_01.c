#include<stdio.h>
int main()
{
    char s[10];
    scanf("%s",s);
    printf("%s\n",s);
    printf("%d",s[5]); // Null character er ascii value 0 hoy
    return 0;
}