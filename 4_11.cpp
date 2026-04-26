/*Упражнение 4.11. Напишите выражение, проверяющее четыре
значения а, b, с и d и являющееся истинным, если значение а больше b,
которое больше c, которое больше d.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers: ";
    cin>>a>>b>>c>>d;
    if(a>b && b>c && c>d)
    cout<<"true"<< endl;
    else
    cout<<"false"<< endl;
    return 0;
}