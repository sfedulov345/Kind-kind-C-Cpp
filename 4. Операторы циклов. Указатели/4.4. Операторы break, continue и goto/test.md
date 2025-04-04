# 4.4 Операторы break, continue и goto

* **Подвиг 1.** Установите соответствия между операторами и их описаниями.
  * break = оператор досрочного прерывания работы цикла
  * continue = оператор пропуска текущей итерации цикла
  * goto = оператор безусловного перехода по указанной метке
  * for = оператор цикла с предусловием
  * do-while = оператор цикла с постусловием
 
* **Подвиг 9 (на повторение).** Выберите все верные утверждения для следующего фрагмента программы:
```C
#include <stdio.h>

#define MUL(X, Y)     X * Y
#define ADD(X, Y)     ((X) + (Y))
#define T_ADD(X, Y)     "Adding two values " # X " and " # Y
#define RES_N(RES)     res_ ## RES

int main(void)
{
    int a = 2, b = 5;
    int res_1 = MUL(7, b);
    int res_2 = MUL(a + 2, b - 1);
    int res_3 = ADD(7, b * 2);
    printf(T_ADD(i, j) "\n");
    printf("%d %d %d", RES_N(1), RES_N(2), RES_N(3));

    return 0;
}
```
* Select all correct options from the list
  * (+)операция ## служит для склейки двух лексем в одну
  * (+)вызов макро-функции MUL(a + 2, b - 1) приведет к не верным результатам вычисления произведения (a+2) * (b-1)
  * (-)вызов макрос-функции T_ADD(i <> 2, j == 3) приведет к синтаксической ошибке
  * (+)операция # возвращает текстовое представление лексемы X
  * (-)вызов макро-функции MUL(7, b) приведет к не верным результатам вычисления произведения 7 * b
  * (+)действие макроопределений распространяется только на текущий модуль
  * (+)макрос-функция T_ADD(i <> 2, j == 3) вернет строку "Adding two values i <> 2 and j == 3"
  * (+)вызов макро-функции ADD(X, Y) всегда будет давать корректные результаты сложения двух числовых выражений

* **Подвиг 10 (на повторение).** Выберите все верные утверждения, касающиеся макроопределений.
  * (+)макроопределение формально должно быть записано в одну строчку (до символа переноса строки)
  * (+)макроопределения обрабатываются до непосредственной компиляции программы
  * (+)при компиляции программы текстовый препроцессор вместо имени макроса подставляет его определение (тело макроса)
  * (-)макроопределения обрабатываются после компиляции программы (перевода в машинный код)
  * (-)директива #undef создает макроопределение, а директива #define отменяет существующее макроопределение
  * (+)директива #define создает макроопределение, а директива #undef отменяет существующее макроопределение
  * (+)имена макросов принято записывать заглавными буквами
