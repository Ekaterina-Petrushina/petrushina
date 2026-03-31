/*Упражнение 1.12. Что делает следующий цикл for? Каково
финальное значение переменной sum?
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i*/
#include <iostream>
int main() {
int sum = 0;
// сложить числа от 1 до 10 включительно
for (int val = -100; val <= 100; ++val)
sum += val; // эквивалентно sum = sum + val
std::cout << "Sum of -100 to 100 inclusive is "<< sum << std::endl;
return 0;
}