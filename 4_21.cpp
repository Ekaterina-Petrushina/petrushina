/*Упражнение 4.21. Напишите программу, использующую условный
оператор для поиска в векторе vector<int> элементов с нечетным
значением и их удвоения.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size=5;
    vector<int> v = {1, 20, 3, 40, 50};
    for(int i=0;i<size;++i){
        if(v[i]%2!=0)
        cout<< 2*v[i]<<" ";
    }
    return 0;
}