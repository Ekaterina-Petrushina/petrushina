/*Упражнение 3.40. Напишите программу, определяющую два
символьных массива, инициализированных строковыми литералами.
Теперь определите третий символьный массив для содержания результата*/
#include <iostream>
#include <cstring>
int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[20];
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    std::cout << result << std::endl;
    return 0;
}