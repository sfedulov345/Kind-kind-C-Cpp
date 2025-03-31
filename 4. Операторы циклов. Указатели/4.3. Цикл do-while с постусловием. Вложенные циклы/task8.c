#include <stdio.h>
#define D1 (i / 100)
#define D2 ((i / 10) % 10)
#define D3 (i % 10)

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int i = a; i <= b; i++) {
        if((D1 != D2) && (D1 != D3) && (D2 != D3)) printf("%d ", i);
    }
  
    return 0;
}
