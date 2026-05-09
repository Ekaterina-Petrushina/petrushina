/*Упражнение 5.19. Напишите программу, использующую цикл do
while для циклического запроса у пользователя двух строк и указания,
которая из них меньше другой.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello World";
    string str2 = "Hello world";
    
    size_t i = 0;
    size_t minLen = min(str1.length(), str2.length());
    
    do {
        if (i >= minLen) break;
        i++;
    } while (i < minLen && str1[i-1] == str2[i-1]);
    
    if (i > 0 && str1[i-1] == str2[i-1]) {
        cout << "line " << endl;
    } 
    else {
        cout << "line differents" << endl;
    }
    
    return 0;
}