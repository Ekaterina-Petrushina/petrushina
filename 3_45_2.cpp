/*Упражнение 3.45. Перепишите программы снова, на сей раз используя
спецификатор auto.*/
#include<iostream>
using namespace std;
int main(){
    constexpr size_t rowCnt=3, colCnt=4;
    int ia[rowCnt][colCnt];
    size_t cnt=0;
    for(auto &row:ia){
    for(auto &col:row){
        col=cnt;
        cout<< col<<" ";
        ++cnt;
    }
    cout<< endl;
}

    return 0;
}