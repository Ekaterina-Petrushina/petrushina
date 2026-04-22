/*Упражнение 3.8. Перепишите программу первого упражнения, а затем традиционный цикл for.*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    string s("Hello World!!!");
    for (decltype(s.size()) index = 0;index != s.size(); ++index)
    s[index] = 'X';
    cout << s << endl;
    return 0;
}