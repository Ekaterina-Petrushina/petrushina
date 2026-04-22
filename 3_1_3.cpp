/*Упражнение 3.1(1.11). Напишите программу, которая запрашивает у
пользователя два целых числа, а затем отображает каждое число в
диапазоне, определенном этими двумя числами.*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main() {
    cout<<"enter two numbers(first<second):"<<endl;
    int v1 = 0, v2 = 0, s=0;
    cin>>v1>>v2;
    cout<<"range betwen " << v1<< " and "<< v2<< endl;
    while (s < v2-1) {
        s=v1+1;
        cout << s <<"  ";
        ++v1;
    }
    return 0;
}