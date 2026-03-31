/*Упражнение 2.14. Допустим ли следующий код? Если да, то какие
значения он отобразит на экране?
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl*/
#include<iostream>
int main(){
    int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;
    return 0;
}// код допустим , выведет i=100,тк i в for существует только в цикле, sum= 45 , который был посчитан в цикле