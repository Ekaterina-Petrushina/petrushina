/*Упражнение 3.6. Используйте серийный оператор for для замены всех
символов строки на X.*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    string s("Hello World!!!");
    for (auto &c : s)
    c = 'X';
    cout << s << endl;
    return 0;
}