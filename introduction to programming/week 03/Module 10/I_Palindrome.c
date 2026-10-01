#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int length = strlen(s);
    int flag = 1;
    for(int i=0,j=length-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            printf("NO\n");
            flag = 0;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    return 0;
}