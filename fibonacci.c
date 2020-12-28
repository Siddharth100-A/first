#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, c;
    printf("enter the number :- ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("result =%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}