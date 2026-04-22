/*Упражнение 3.20.Измените программу так, чтобы
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
    for(decltype(v.size()) index=0;index < v.size()/2; ++index){
        cout << v[index] + v[v.size()-1-index] << " ";
    }
    if(v.size()%2!=0)
        cout<<v[v.size()/2];
    return 0;
}