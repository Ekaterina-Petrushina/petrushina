/*Упражнение 3.41. Напишите программу, инициализирующую вектор
значениями из массива целых чисел.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> v(begin(arr),end(arr));
    for(int index=0;index < v.size(); ++index)
        cout<< v[index]<<" ";
    return 0;
}