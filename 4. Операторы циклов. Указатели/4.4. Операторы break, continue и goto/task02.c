#include <stdio.h>

int main(void)
{
    int n = 5, m = 7;
    int total = 5;

    for(int i = 0;i < total; ++i) {
        int x, y;
        scanf("%d, %d", &x, &y);

        // здесь прописывайте проверку
        if(1 <= x && x <= n && 1 <= y && y <= m) printf("(%d, %d)\n", x, y);
        else continue;
    }

    return 0;
}
