/*Упражнение 3.10. Напишите программу, которая читает строку
символов, включающую знаки пунктуации, и выведите ее, но уже без
знаков пунктуации.*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    string s;
    string result;
    getline(cin,s);
    for(auto c: s){
       if(!ispunct(c))
       result+=c; 
    }
    cout<<result<<endl;
    return 0;
}