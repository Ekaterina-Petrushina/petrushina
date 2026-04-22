/*Упражнение 3.42. Напишите программу, копирующую вектор целых
чисел в массив целых чисел.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10, 20, 30, 40, 50};
    int arr[v.size()];
    for(int index=0;index < v.size(); ++index)
{
    arr[index]=v[index];
    cout<< arr[index]<<" ";
}
    return 0;
}