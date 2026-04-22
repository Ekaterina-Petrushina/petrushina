/*Упражнение 3.14. Напишите программу, читающую
последовательность целых чисел из потока cin и сохраняющую их в
векторе.*/
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main(){
    int v1;
    vector<int> v;
    cout<< " enter numbers:"<< endl;
    while(cin>>v1){
    v.push_back(v1);
    }
    cout<<"result:"<<endl;
    for(decltype(v.size()) index=0;index<v.size();index++){
    cout<<v[index]<<" ";
    }
    return 0;
}