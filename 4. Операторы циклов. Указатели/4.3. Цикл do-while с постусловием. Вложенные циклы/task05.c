#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, m;
    int a = 1, b = 1000;
    scanf("%d", &x);
    
    do {
        m = rand() % (b - a + 1) + a;
        if(m < x) a = m;
        else if(m > x) b = m;
        else {
            printf("%d", m);
            return 0;
        }
    } while(m != x);
    
    return 0;
}
