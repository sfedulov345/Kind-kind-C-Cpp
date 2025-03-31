#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd", &b);

    // здесь продолжайте программу
    short *ptr_a = &a;
    *ptr_a = b;
    printf("%d", a);
    
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}
