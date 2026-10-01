#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("Cox's Bazar Jabo\n");

        if (taka >= 10000)
        {
            printf("Tarpor Saintmartin Jabo\n");
        }
        else
        {
            printf("Then Cox's Bazar theke ferot chole asbo\n");
        }
    }
    else
    {
        printf("Kothao Jabo Na\n");
    }

    return 0;
}