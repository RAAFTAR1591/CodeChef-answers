#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, a, b, x, r;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &x);
        r = ((b - a) / x);
        printf("%d\n", r);
    }
    return 0;
}
