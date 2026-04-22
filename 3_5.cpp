/*Упражнение 3.5. Напишите программу, читающую строки со
стандартного устройства ввода и суммирующую их в одну большую
строку. Отобразите полученную строку*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
int main(){
    string line1, line2;
    cout<< " enter lines: " << endl;
    while(getline(cin,line1)){
        if(line1.empty())
        {
            break;
        }
        line2+=line1;
    }
    cout<< line2<< endl;
    return 0;
}