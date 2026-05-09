/*Упражнение 5.25. Перепишите предыдущую программу так, чтобы
использовать для обработки исключения блок try. Раздел catch должен
отобразить сообщение и попросить пользователя ввести новое число и
повторить код в блоке try.*/
#include <iostream>
#include<stdexcept>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter 2 numbers"<<endl;
    while(cin>> num1>>num2)
    try{
        if(num2==0){
    throw runtime_error("Error, second nubber = 0!");
    }
    cout<<"result: "<<num1/num2;
    break;
    }
    catch(runtime_error err){
        cout<<err.what()<<"\n Try again numbers";
    }
    return 0;
}