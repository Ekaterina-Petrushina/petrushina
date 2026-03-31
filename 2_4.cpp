/*Упражнение 2.3. Каков будет вывод следующего кода?
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
Упражнение 2.4. Напишите программу для проверки правильности
ответов. При неправильных ответах изучите этот раздел еще раз.*/
#include<iostream>
int main(){
    int i = 10, i2 = 42;
    unsigned u=10, u2=42;
    std::cout <<"u2 - u:"<< u2 - u << std::endl;
    std::cout <<"u - u2:"<< u - u2 << std::endl;// бред тк получилось отрицательное число в unsigned    
    std::cout <<"i2 - i:"<< i2 - i << std::endl;
    std::cout <<"i - i2:"<< i - i2 << std::endl;
    std::cout <<"i - u:"<< i - u << std::endl;
    std::cout <<"u - i:"<< u - i << std::endl;
    return 0;
}