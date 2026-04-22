/*Упражнение 3.15. Повторите предыдущую программу, но на сей раз
читайте строки.*/
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main(){
    string v1;
    vector<string> v;
    cout<< " enter lines:"<< endl;
    while(cin>>v1){
    v.push_back(v1);
    }
    cout<<"result:"<<endl;
    for(decltype(v.size()) index=0;index<v.size();index++){
    cout<<v[index]<<" ";
    }
    return 0;
}