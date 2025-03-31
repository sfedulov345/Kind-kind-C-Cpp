#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
  
    int d = 2;
    while(n > 1) {
        if(n % d == 0) {
            printf("%d ", d);
            n /= d;
        } else d++;
    }
  
    return 0;
}
