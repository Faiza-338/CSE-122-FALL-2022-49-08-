//Codeforce Problems No.-116A.
//Problem Name-Tram.

#include <cstdio>

int main()
{
    int n, a, b, c(0), m(0);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &b);
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }

    printf("%d\n", m);
    return 0;
}
