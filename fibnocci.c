#include <stdio.h>
int main()
{
    int i, n, t = 0, d = 1, x;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t);
       x = t + d;
        t = d;
        d = x;
    }
    return 0;
}
