#include <stdio.h>

int main(void) {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    
    double s = 0.;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            for(int t = 1; t <= k; t++) {
                s += ( (double)(j * j) / ((i + t) * (i + t) * (i + t) - t) );
            }
        }
    }
    s *= (1. / (n + m + k));
    printf("%.4f", s);
  
    return 0;
}
