/*Упражнение 4.28. Напишите программу для вывода размера каждого
из встроенных типов*/
#include<iostream>
using namespace std;
int main(){
    cout<<"int: "<<sizeof (int)<< endl;
    cout<<"double: "<<sizeof (double)<< endl;
    cout<<"long: "<<sizeof (long)<< endl;
    cout<<"float: "<<sizeof (float)<< endl;
    cout<<"bool: "<<sizeof (bool)<< endl;
    cout<<"char: "<<sizeof (char)<< endl;
    cout<<"unsigned: "<<sizeof (unsigned)<< endl;
    cout<<"long long: "<<sizeof (long long)<< endl;
    cout<<"short: "<<sizeof (short)<< endl;
    cout<<"long double: "<<sizeof (long double)<< endl;
    return 0;
}