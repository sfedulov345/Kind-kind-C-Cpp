#include <stdio.h>

int main(void) {
    int n;
    double s = 0.;
    scanf("%d", &n);
    
    do {
        s += (1. / n);
        n--;
    } while(n >= 1);
    
    printf("%.2f", s);
    
    return 0;
}
