/*3.4 Затем измените программу так, чтобы она
сообщала, одинаковая ли у строк длина, а в противном случае — которая
из них длиннее*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
int main(){
    string line1, line2;
    cout<< " enter two lines: " << endl;
    getline(cin,line1);
    getline(cin,line2);
    auto len1=line1.size();
    auto len2=line2.size();
    if(len1==len2) {
        cout<< "the lines are equal" << endl;
    }
    else{
        cout<< "the lines are  not equal" << endl;
        if(len1>len2){
            cout<< " line1 > line 2" << endl;
        }
        else{
           cout<< " line1 < line 2" << endl; 
        }    
    }
    return 0;
}