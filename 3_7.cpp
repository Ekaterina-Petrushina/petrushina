/*Упражнение 3.7. Что будет, если определить управляющую
переменную цикла в предыдущем упражнении как имеющую тип char?
Предскажите результат, а затем измените программу так, чтобы
использовался тип char, и убедитесь в своей правоте.*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    string s("Hello World!!!");//строка не изменится тк с-копия символа, ф не ссылка на оригинал
    for (char c : s)
    c = 'X';
    cout << s << endl;
    return 0;
}