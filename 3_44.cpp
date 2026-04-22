/*Упражнение 3.44. Перепишите программы из предыдущего
упражнения, используя псевдоним для типа управляющих переменных
цикла.*/
#include<iostream>
using namespace std;
int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    size_t cnt = 0;
    using int_array = int[4];
    for (int i = 0; i < rowCnt; ++i) {
        for (int j = 0; j < colCnt; ++j) {
            ia[i][j] = cnt++;
        }
    }
    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q)
        cout << *q << ' ';
        cout << endl;
    }
    return 0;
}