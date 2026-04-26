/*Упражнение 4.10. Напишите условие цикла while, который читал бы
целые числа со стандартного устройства ввода, пока во вводе не встретится
значение 42.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter numbers: ";
    while(cin>>a){
        if(a==42)
        break;
        else
        cout<< a << endl;
    };
    return 0;
}