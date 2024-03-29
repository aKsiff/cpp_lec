#include <stdio.h>

// int - целочисленный тип со знаком, -32767..32767
// unsigned / short / long / long long int - слово "int" может опускаться
// _Bool -> - изначально его вообще не было, использовалась 0/1 логика / нужно подключать <stdbool.h> на Си, на плюсах не надо
#include <stdio.h> // через решетку пишутся НЕ библиотеки, а под-процессоры

//объявление переменных
int a, b = 0;
//неиницилиозированные переменные содержат мусор. непонятно че там лежит

int main(void); // прототип функции, который объявляет функцию
// нужен другой файлик: там тоже нужно объявлять прототип
int summ(int a, int b) {
    return a + b;
}

int main(void) { //в лекции было void, а не int
    printf("Hello, World!\n");
    a = 3;
    b = 4;
    printf("%i %i\n", summ(a, b), summ(a + 2, b + 2));
    printf("5 + 2 = %i \n", 5 + 2); //%i - "передай в строку тот аргумент, который сейчас будет передан / только для функций группы print
    // здесь как может быть return 0, так и нет, поскольку для метода main есть исключение - автоматом он ставит  r0
    // cout - долгая хуйня

    //про printf и cout - второе работает сложнее, на первом удобнее делать сложные вещи (выравнивание напр)
    printf("5 + 2 = %3i \n", 5 + 2); //добавление троечки выводит три символа перед числом (здесь выведет "  7"

    scanf("%i %i", &a, &b); // что читать и куда писать
    // || i дает компилятору воспринять все три формы: 12, 0xC (0 - знак 8миричной сист), 014
    printf("a + b = %3i\n", a+b);

    // чтение из файла
    FILE *somefile = fopen("in.txt", "r"); //открытие файла
    // проверить что файл открылся
    fscanf(somefile, "%i %i", &a, &b); // одновременное чтение и запись в файл зависит от мода. одновременно писать и читать не стоит
    //
    // поработали и закрыли
    fclose(somefile);

    return 0; // не написать == неявное return 0, нахер его
}