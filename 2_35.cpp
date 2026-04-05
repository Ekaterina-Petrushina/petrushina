/*Упражнение 2.35. Укажите типы, выведенные в каждом из следующих
определений. Затем напишите программу, чтобы убедиться в своей
правоте.
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;*/
#include<iostream>
int main(){
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;
    std::cout<<" j:int(const верхнего уровна в i отбрасывается): "<< j <<std::endl;
    std::cout<<" k:const int & : "<< k <<std::endl;
    std::cout<<" p:const int * : "<< *p << std::endl;
    std:: cout<<" j2:const int : "<< j2 <<std::endl;
    std:: cout<<" k2:const int & : "<< k2 <<std::endl;
    return 0;
}