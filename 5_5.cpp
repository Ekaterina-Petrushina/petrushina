/*Упражнение 5.5. Напишите собственную версию программы
преобразования числовой оценки в символ с использованием оператора if
else.*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> scores={ "1","2","3","4","5"};
    string lgrade;
    int grade;
    cout<<"enter grade: "<<endl;
    cin>>grade;
    if (grade<0||grade>100){
        cout<<"error"<<endl;
        return -1;
    }
    if(grade<60)
    lgrade=scores[0];
    else {if(grade==100)
    lgrade="5++";
    else{
    lgrade=scores[(grade-50)/10];
    if(grade%10>7)
    lgrade+='+';
    else if (grade%10<3)
    lgrade+='-';
    }}
    cout<<"score :"<<lgrade;
    return 0;
}