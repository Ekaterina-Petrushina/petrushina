/*Упражнение 2.17. Что выводит следующий код?
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;*/
#include<iostream>
int main(){
    int i, &ri = i;
    i = 5;
    ri = 10;
std::cout << i << " " << ri << std::endl;
    return 0;
}//выводит 10 10 тк в конце присвоилизначение 10 объекту r тем самым и на который ссылаектся r т.е. i