#include <stdio.h>

int main(void) {
    int x, res = 1;
    while(scanf("%d", &x) && x != 0) {
        if(x < 0) continue;
        res *= x;
    }
    printf("%d", res);
  
    return 0;
}
