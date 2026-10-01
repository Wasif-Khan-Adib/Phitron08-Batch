#include<stdio.h>
int main()
{
    int x=10;
    int y=x++; // x এর value y এ যাচ্ছে...then x er increment hocche
    printf("%d %d",x,y);
    return 0;
}