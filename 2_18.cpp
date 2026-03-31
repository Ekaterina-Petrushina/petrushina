/*Упражнение 2.18. Напишите код, изменяющий значение указателя.
Напишите код для изменения значения, на которое указывает указатель.*/
#include<iostream>
int main(){
    //изменяем значение указателя
    int *p=0;
    int i=1;
    int *p1=&i;
    p=p1;
    std::cout<<"changed the value of the pointed: "<<*p<<std::endl;
    //изменяем значение , на которое указывает указатель
    int k=42;
    int *c=&k;
    *c=10;
    std::cout<<"changed the value of the number: "<<k<<std::endl;

    return 0;
}