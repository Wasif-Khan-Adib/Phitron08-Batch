#include <stdio.h>
int main()
{
    long long int a, b, c ,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int mul = a * b;
    long long int mull = c * d;
    long long int sub = mul - mull;
    printf("Difference = %lld", sub);
    return 0;
}