/*Упражнение 3.16. Напишите программу, выводящую размер и
содержимое вектора из упражнения 3.13.*/
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main(){
    vector<int> v1;//пустой вектор
    cout<< "v1: ";
    for(auto &i : v1)
    cout << i <<" ";
    cout << endl;
    vector<int> v2(10);
    cout << "v2: ";
    for(auto &i : v2)
    cout  << i <<" ";
    cout << endl;
    vector<int> v3(10, 42);
    cout<< "v3: ";
    for(auto &i : v3)
    cout << i <<" ";
    cout << endl;
    vector<int> v4{10};
    cout<< "v4: ";
    for(auto &i : v4)
    cout << i <<" ";
    cout << endl;
    vector<int> v5{10, 42};
    cout<< "v5: ";
    for(auto &i : v5)
    cout << i <<" ";
    cout << endl;
    vector<string>v6{10};//десять пустых строк
    cout<< "v6: ";
    for(auto &i : v6)
    cout << i <<" ";
    cout << endl;
    vector<string> v7{10, "hi"};
    cout<< "v7: ";
    for(auto &i : v7)
    cout << i <<" ";
    cout << endl;
    return 0;
}