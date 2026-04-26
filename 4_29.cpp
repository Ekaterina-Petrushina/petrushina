/*Упражнение 4.29. Предскажите вывод следующего кода и объясните
свое рассуждение. Напишите и выполните соответствующую программу.
Совпадает ли вывод с ожиданиями? Если нет, то объясните почему.
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;*/
#include<iostream>
using namespace std;
int main(){
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;//размер всего массива: 10 * 4 = 40 байт/размер одного элемента:4 байта
cout << sizeof(p)/sizeof(*p) << endl;//размер указателя:4 байтizeof(*p)/размер того, на что указывает p: 4 байта
return 0;
}