/*Упражнение 3.43. Напишите три разных версии программы для вывода
элементов массива ia. Одна версия должна использовать для управления
перебором серийный оператор for*/
#include<iostream>
using namespace std;
int main(){
    constexpr size_t rowCnt=3, colCnt=4;
    int ia[rowCnt][colCnt];
    size_t cnt=0;
    for(int (&row)[colCnt]:ia){
    for(int &col:row){
        col=cnt;
        cout<< col<<" ";
        ++cnt;
    }
    cout<< endl;
}

    return 0;
}