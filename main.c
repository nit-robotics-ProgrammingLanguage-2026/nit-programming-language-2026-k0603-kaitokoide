#include <stdio.h>

int main(void)
{
    int n;
    long long sum = 0;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (long long i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}
