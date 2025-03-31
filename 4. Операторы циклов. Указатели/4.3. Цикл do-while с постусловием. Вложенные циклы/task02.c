#include <stdio.h>

int main(void)
{
    int p = 1, n, i = 1;
    scanf("%d", &n);

    do {
        p *= i;
        i++;
    } while(i <= n);

    return 0;
}
