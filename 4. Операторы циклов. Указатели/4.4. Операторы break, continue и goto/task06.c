#include <stdio.h>

int main(void) {
    int n, m, s = 0;
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if((i + j) >= 10) goto exit_sum;
            s += (i + j);
        }
    }
    
    exit_sum: printf("%d", s);
  
    return 0;
}
