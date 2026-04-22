/*3.43 обычный цикл for,указатели*/
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
    for (int(*p)[colCnt] = ia; p < ia + rowCnt; ++p) {
        for (int *q = *p; q < *p + colCnt; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
    return 0;
}