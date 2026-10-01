#include<stdio.h>
int main()
{
    char s[50];
    //gets(s); // gets use korle , alada kore size or onno kisu input korte hoy na
    fgets(s,20,stdin); // (s,size,stdin) // space er jonno fgets use kora better
    printf("%s",s);
    return 0;
}