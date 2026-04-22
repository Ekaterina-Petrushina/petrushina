/*Упражнение 3.4. Напишите программу, читающую две строки и
сообщающую, равны ли они. В противном случае программа сообщает,
которая из них больше.*/
#include<iostream>
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
    if(line1==line2) {
        cout<< "the lines are equal" << endl;
    }
    else{
        cout<< "the lines are  not equal" << endl;
        if(line1>line2){
            cout<< " line1 > line 2" << endl;
        }
        else{
           cout<< " line1 < line 2" << endl; 
        }    
    }
    return 0;
}