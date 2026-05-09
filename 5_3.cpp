/*Упражнение 5.3. Используя оператор запятой (см. раздел 4.10),
перепишите цикл while из раздела 1.4.1 так, чтобы блок стал больше не
нужен. Объясните, улучшило ли это удобочитаемость кода.*/
#include <iostream>
int main() {
    int sum = 0, val = 50;
    while (val <= 100) 
        sum += val,++val; 
std::cout << "Sum of 50 to 100 inclusive is "<< sum << std::endl;
return 0;
}