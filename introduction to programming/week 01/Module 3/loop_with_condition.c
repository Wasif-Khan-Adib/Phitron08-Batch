#include <stdio.h>
int main()
{
    for (int i = 1; i <= 15; i++)
    {
         if(i%2 == 0) //jor er condition i%2 == 0
        //if (i % 2 == 1) // bijor er condition i%2 == 1
            printf("%d\n", i);
    }
    return 0;
}