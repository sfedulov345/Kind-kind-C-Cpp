#include <stdio.h>

int main(void) {
    int m, n, inv = 0;
    scanf("%d %d", &m, &n);
    
    do {
        int x = m, inv = 0;
        while(x > 0) {
            inv = inv * 10 + x % 10;
            x /= 10;
        }
        if(inv == m) printf("%d ", m);
        m++;
    } while(m <= n);
  
    return 0;
}
