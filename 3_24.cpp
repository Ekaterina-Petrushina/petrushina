/*Упражнение 3.24(3.20).Измените программу так, чтобы
она отображала сумму первого и последнего элементов, затем сумму
второго и предпоследнего и т.д..*/
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
    auto mid= v.begin()+v.size()/2;
    for(auto it=v.begin();it!= mid; ++it){
        cout << *it + *((v.end()-1) + (it - v.begin())) << " ";
    }
    if(v.size()%2!=0)
        cout<<*mid;
    return 0;
}