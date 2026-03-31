/*Упражнение 2.13. Каково значение переменной j в следующей
программе?
int i = 42;
int main() {
int i = 100;
int j = i;
}*/
#include<iostream>
int i=42;
int main(){
    int i=100;
    int j=i;
    std::cout<<j<<std::endl;//выведет 100 тк в скобочках главнее локальная переменная i=100, jстоит после i=100
    return 0;

}