#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// Функция возращает true, если дата корректна, иначе - false.
// Вы можете объявлять дополнительные функции, главное, чтобы присутствовала эта функция.
// Вместо точки с запятой, открывайте фигурные скобки и начинайте писать.bool Opacha()bool Opacha()
bool date_correctness(int day, int month, int year){ 

 int MonthArray[]= {31,year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? 29 : 28) : 29) : 28 ,31,30,31,30,31,31,30,31,30,31};
	return ((year > 0) && (0 < day && day <= 31) && (0< month && month < 13)) ? day <= MonthArray[month-1]:false;
}

void test_date_correctness() {
    assert(date_correctness(1,1,2018));
    assert(date_correctness(30,5,1999));
    assert(date_correctness(31,12,100));
    assert(date_correctness(31,8,2016));
    assert(date_correctness(29,2,2400));
    assert(!date_correctness(31,4,3000));
    assert(!date_correctness(-1,3,1));
    assert(!date_correctness(1,-3,1));
    assert(!date_correctness(1,3,-1));
    assert(!date_correctness(2,13,2001));
    assert(!date_correctness(40,5,777));
    assert(!date_correctness(29,2,1900)); // 1900 - visokosni god, tam dolshno bit 29 dney v fevrale

    printf("Тесты прошли успешно!\n");
}

int main() {
    test_date_correctness();
    return 0;
}
