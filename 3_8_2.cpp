/*Упражнение 3.8. Перепишите программу первого упражнения, сначала
используя оператор while*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    string s("Hello World!!!");
    decltype(s.size()) index = 0;
    while(index != s.size()){
        s[index] = 'X';
        ++index;
    }
    cout << s << endl;
    return 0;
}