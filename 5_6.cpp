/*Упражнение 5.6. Перепишите программу оценки так, чтобы
использовать условный оператор (см. раздел 4.7) вместо оператора if
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
    lgrade = (grade < 60) ? scores[0] :
         (grade == 100) ? "5" :
         (grade % 10 > 7) ? scores[(grade - 50) / 10] + "+" :
         (grade % 10 < 3) ? scores[(grade - 50) / 10] + "-" :
                           scores[(grade - 50) / 10];
    cout<<"score :"<<lgrade;
    return 0;
}