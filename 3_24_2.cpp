/*Упражнение 3.24(3.20). Прочитайте набор целых чисел в вектор. Отобразите
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
    for(auto it=v.begin();it!=v.end()-1 ; ++it){
        cout << *it+*(it+1)<< " ";
    }
    return 0;
}