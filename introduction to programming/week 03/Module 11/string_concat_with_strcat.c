#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);

    //strcat(a,b); // a string e , b string ke rakhbo
    strcat(b,a); // b string e , a string ke rakhbo

    printf(" %s %s ",a,b);
    return 0;
}