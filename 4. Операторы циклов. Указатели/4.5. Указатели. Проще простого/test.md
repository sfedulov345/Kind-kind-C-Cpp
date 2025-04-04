# 4.5 Указатели. Проще простого

* **Подвиг 1.** Выберите все верные утверждения, касающиеся размещения переменных в памяти устройства
  * (+)адресом переменной называют порядковый номер ячейки, начиная с которой переменная хранится в памяти
  * (+)разные переменные (обычные) хранятся в разных не пересекающихся ячейках памяти
  * (-)адресом переменной называют порядковый номер ячейки, которой оканчивается область памяти, отведенная под переменную
  * (+)порядковый номер ячейки памяти называется ее адресом
  * (+)через имя переменной на уровне языка Си осуществляется доступ к непрерывной области памяти из одной или нескольких ячеек
  * (-)разные переменные (обычные) могут использовать одни и те же ячейки памяти

* **Подвиг 2.** Выберите все верные утверждения, касающиеся указателей языка Си.
  * (+)общий синтаксис объявления указателей следующий: <тип данных> *<имя указателя>;
  * (+)размер указателей, занимаемых в памяти устройства, как правило, совпадает с разрядностью операционной системы
  * (+)тип, указываемый при объявлении указателей, относится к данным, с которыми его предполагается использовать
  * (-)тип, указываемый при объявлении указателей, относится к типу самого указателя
  * (+)указатель хранит адрес области памяти, с которой потенциально может работать (записывать и считывать данные)
  * (+)посредством указателей можно осуществлять доступ к произвольным ячейкам памяти
 
* **Подвиг 3.** Выберите все верные утверждения, касающиеся следующей программы.
```C
#include <stdio.h>

int main(void)
{
    short var = 7;
    short* ptr_var;

    ptr_var = &var;
    *ptr_var = 8;

    printf("%d\n", *ptr_var);

    return 0;
}
```
* Select all correct options from the list
  * (-)операция &, записанная перед именем переменной, возвращает значение переменной
  * (+)если перед указателем записан символ *, то в область памяти, хранимой в указателе, заносится или считывается то или иное значение
  * (-)если перед указателем записан символ *, то ему присваивается адрес области памяти
  * (+)если перед указателем не ставится *, то ему присваивается адрес области памяти
  * (+)объявляется указатель ptr_var для работы с данными типа short
  * (-)если перед указателем не ставится *, то в область памяти, хранимой в указателе, заносится или считывается то или иное значение
  * (+)операция &, записанная перед именем переменной, возвращает ее адрес
 
* **Подвиг 4.** К чему может привести выполнение следующей программы?
```C
#include <stdio.h>

int main(void)
{
    short* ptr_var;
    *ptr_var = 8;

    return 0;
}
```
* Select one option from the list
  * (+)в произвольную область памяти будет занесено значение 8 и программа может завершится аварийно
  * в область памяти с адресом 0 будет занесено значение 8 и программа гарантированно успешно завершится
  * в область памяти с адресом 0 будет занесено значение 8 и программа может завершится аварийно
  * в произвольную область памяти будет занесено значение 8 и программа гарантированно будет успешно завершаться
 
* **Подвиг 10 (на повторение).** Выберите все верные утверждения, касающиеся оператора цикла for языка Си стандарта C99 и выше.
  * (+)в блоке инициализации цикла for можно объявлять и инициализировать новые переменные
  * (+)цикл for сначала проверяет условие, а затем, выполняет очередную итерацию
  * (-)цикл for работает, пока ложно условие цикла
  * (+)цикл for записывается по синтаксису: for([инициализация]; [условие]; [изменение значений]) оператор;
  * (+)цикл for работает, пока истинно условие цикла
  * (+)блок "изменение значений" выполняется сразу после очередной итерации тела цикла
  * (-)цикл for сначала выполняет итерацию, а затем, проверяет условие продолжения цикла
