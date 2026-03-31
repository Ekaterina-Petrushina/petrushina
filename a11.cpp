/*Упражнение 1.11. Напишите программу, которая запрашивает у
пользователя два целых числа, а затем отображает каждое число в
диапазоне, определенном этими двумя числами.*/
#include <iostream>
int main() {
    std::cout<<"enter two numbers(first<second):"<<std::endl;
    int v1 = 0, v2 = 0, s=0;
    std::cin>>v1>>v2;
    std::cout<<"range betwen " << v1<< " and "<< v2<< std::endl;
    while (s < v2-1) {
        s=v1+1;
        std::cout << s <<"  ";
        ++v1;
    }
    return 0;
}