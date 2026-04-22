/*Упражнение 3.2. Напишите программу, читающую со стандартного
устройства ввода по одной строке за раз.*/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    //вывод строки
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;
    return 0;
}
