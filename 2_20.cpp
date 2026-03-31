/*Упражнение 2.20. Что делает следующая программа?
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;*/
#include<iostream>
int main(){
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;//умножаем 42 на 42
std::cout<<i<<std::endl;//1764 выведет
    return 0;
}