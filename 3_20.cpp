/*Упражнение 3.20. Прочитайте набор целых чисел в вектор. Отобразите
сумму каждой пары соседних элементов.*/
#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main (){
    vector<int> v;
    int n;
    while(cin>>n)
    v.push_back(n);
    for(decltype(v.size()) index=0;index < v.size(); ++index){
        cout << v[index] + v[index + 1] << " ";
    }
    return 0;
}