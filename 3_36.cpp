/*Упражнение 3.36. Напишите программу, сравнивающую два массива
на равенство.*/
#include<iostream>
using namespace std;
int main(){
    int arr1[] = {0,1,2};
    //int arr1[] = {0,1,2,3,4};
    int arr2[] = {0,1,2,3,4,5,6,7,8,9};
    //int arr1[] = {0,2,4,6,8};
    int size1=3, size2=10;
    int *e1 = arr1+size1;
    int *e2=arr2+size2;
    int *p1=arr1;
    int *p2=arr2;
    if(size1==size2){
        while(p1<e1){
        if(*p1!=*p2){
        cout<<"different array"<<endl;
        break;
        }
        else{
            p1++;
            p2++;
        }
        
    }
    }
        else{
            cout<<"different size"<<endl;
        
    }
    return 0;
}