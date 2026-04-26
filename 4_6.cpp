/*Упражнение 4.6. Напишите выражение, чтобы определить, является ли
значение типа int четным или нечетным.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter  number: ";
    cin>>a;
    if(a%2==0)
    cout<<"even number"<< endl;
    else
    cout<<"odd number"<< endl;
    return 0;
}