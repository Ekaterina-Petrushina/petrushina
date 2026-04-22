/*Упражнение 3.45. Перепишите программы снова, на сей раз используя
спецификатор auto.*/
#include<iostream>
using namespace std;
int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    for (int i = 0; i < rowCnt; ++i) {
        for (int j = 0; j < colCnt; ++j) {
            ia[i][j] = cnt++;
        }
    }
    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
        cout << *q << ' ';
        cout << endl;
}

    return 0;
}