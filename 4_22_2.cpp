/*Упражнение 4.22. Дополните программу, присваивающую переменной
значение оценки (высокая, проходная, не проходная), еще одной оценки,
минимально проходной, от 60 до 75 включительно. Напишите две версии:
одна использует только условные операторы; вторая использует один или
несколько операторов if. Как по вашему, какую версию проще понять и
почему?*/
#include<iostream>
using namespace std;
int main(){
    int grad;
    string finalgrad;
    cout<<"Enter  number: ";
    cin>>grad;
    finalgrad=(grad>90)?"high pass":(grad>=60 && grad<=75)?" minimal pass":(grad<60)?"fail":"pass";
    cout<< finalgrad <<endl;
    return 0;
}