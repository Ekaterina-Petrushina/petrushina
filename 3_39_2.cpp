/*Упражнение 3.39. Напишите программу, сравнивающую две строки.
Затем напишите программу, сравнивающую значения двух символьных
строк в стиле С.*/
#include <iostream>
#include <string>
#include <cstring>
int main() {
    const char str1[] = "A string example";
    const char str2[] = "A different string";
    if (std::strcmp(str1, str2)==0) {
        std::cout << "lines are equal" << std::endl;
    } else{
        std::cout << "lines different" << std::endl;
    } 
    return 0;
}