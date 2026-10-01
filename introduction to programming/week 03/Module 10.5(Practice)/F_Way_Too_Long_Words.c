#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        char s[105];
        scanf("%s",s);
        int len = strlen(s);
        
        if(len > 10)
        {
            printf("%c%d%c\n",s[0],len-2,s[len-1]); 
            
            // 1st character er index 0, 1st & last character
            //bad dite total len theke 2 minus , last character print er jonno total index theke 1 minus
            // tai [len - 1] disi
        }
        else
        {
            printf("%s\n",s);
        }
        
    }
    return 0;
}