/*Упражнение 3.39. Напишите программу, сравнивающую две строки.
Затем напишите программу, сравнивающую значения двух символьных
строк в стиле С.*/
#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "enter first line: ";
    std::getline(std::cin, str1); 
    std::cout << "enter second line: ";
    std::getline(std::cin, str2);
    if (str1 == str2) {
        std::cout << "lines are equal" << std::endl;
    } else{
        std::cout << "lines different" << std::endl;
    } 
    return 0;
}