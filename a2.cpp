/*Упражнение 1.4. Наша программа использовала оператор суммы (+)
для сложения двух чисел. Напишите программу, которая использует
оператор умножения (*) для вычисления произведения двух чисел*/
#include<iostream>
int main(){
    std::cout<<"enter two numbers:"<<std::endl;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout<<"the multiply of "<< v1 <<" and "<< v2 <<" is "<< v1*v2 <<std::endl;
    return 0;
}