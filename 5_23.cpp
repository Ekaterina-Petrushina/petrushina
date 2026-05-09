/*Упражнение 5.23. Напишите программу, которая читает два целых
числа со стандартного устройства ввода и выводит результат деления
первого числа на второе.*/
#include <iostream>
#include<stdexcept>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter 2 numbers"<<endl;
    cin>> num1>>num2;
    if(num2==0){
    throw runtime_error("Error, second nubber = 0!");
    }
    cout<<"result: "<<num1/num2;
    return 0;
}