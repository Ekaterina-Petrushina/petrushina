/*Упражнение 3.32. Скопируйте массив, определенный в предыдущем
упражнении, в другой массив. Перезапишите эту программу так, чтобы
использовались векторы.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n=10;
    for(int i=0;i<n;++i)
    v.push_back(i);
    vector<int> v2;
    v2=v;
    for(decltype(v2.size()) index=0;index < v2.size(); ++index)
        cout<< v2[index]<<" ";

    return 0;
}