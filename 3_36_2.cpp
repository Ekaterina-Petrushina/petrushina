/*Упражнение 3.36. Напишите программу, сравнивающую два массива
на равенство. Напишите подобную программу для сравнения двух
векторов.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size1=5,size2=5;
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v2 = {10, 20, 3, 40, 50};
    if(size1==size2){
        for(int i=0;i<size2;++i){
        if(v[i]!=v2[i]){
        cout<<"different array"<<endl;
        break;
        }
        else{
            cout<<v[i]<<"="<<v2[i]<<endl;
        }
        
    }
    }
        else{
            cout<<"different size"<<endl;
        
    }
    return 0;
}
