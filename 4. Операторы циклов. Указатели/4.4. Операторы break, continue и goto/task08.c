#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    bool flag = true;
    scanf("%d", &n);
    
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = false;
            break;
        }
    }
    
    if(flag) printf("yes");
    else printf("no");
    
    return 0;    
}
