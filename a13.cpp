/*Упражнение 1.13. Напишите программу, которая использует цикл for
 для суммирования чисел от 50 до 100.*/ 
#include <iostream>
int main() {
int sum = 0;
for (int val = 50; val <= 100; ++val)
sum += val;
std::cout << "Sum of 50 to 100 inclusive is "<< sum << std::endl;
return 0;
}