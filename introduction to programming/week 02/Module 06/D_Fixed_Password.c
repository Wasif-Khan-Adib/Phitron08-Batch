#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) !=EOF)
    //যতক্ষণ না ইনপুট ফাইল শেষ হচ্ছে, ততক্ষণ ইনপুট নিবে এবং লুপ চলবে
    if(n==1999)
    {
        printf("Correct\n");
        break;
    }
    else
    {
        printf("Wrong\n");
    }
    return 0;
}