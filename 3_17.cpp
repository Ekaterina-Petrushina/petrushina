/*Упражнение 3.17. Прочитайте последовательность слов из потока cin
и сохраните их в векторе. Прочитав все слова, обработайте вектор и
переведите символы каждого слова в верхний регистр. Отобразите
преобразованные элементы по восемь слов на строку.*/
#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main (){
    vector<string> v;
    string w;
    while(cin>>w)
    v.push_back(w);
    for (decltype(v.size()) index = 0;index != v.size(); ++index){
        for(auto &c:v[index])
        c=toupper(c);
    }
    for (decltype(v.size()) index = 0;index != v.size(); ++index){
        cout<< v[index];
        if((index+1)%8==0)
        cout<<endl;
        else
        cout<<" ";
    }
    return 0;
}