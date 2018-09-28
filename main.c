#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// Функция возращает true, если дата корректна, иначе - false.
// Вы можете объявлять дополнительные функции, главное, чтобы присутствовала эта функция.
// Вместо точки с запятой, открывайте фигурные скобки и начинайте писать.
bool date_correctness(int day, int month, int year);


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
    assert(!date_correctness(29,2,1900));

    printf("Тесты прошли успешно!\n");
}

int main() {
    test_date_correctness();
    return 0;
}
