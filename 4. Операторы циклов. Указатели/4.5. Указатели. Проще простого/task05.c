#include <stdio.h>

int main(void)
{
    double var_d = 0;

    // здесь продолжайте программу
    double *ptr_var_d = &var_d;
    *ptr_var_d = -54.38;
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}
