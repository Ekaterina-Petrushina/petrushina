/*Упражнение 3.31. Напишите программу, где определен массив из
десяти целых чисел, каждому элементу которого присвоено значение,
соответствующее его позиции в массиве.*/
#include<iostream>
int main(){
    constexpr size_t arr_size=10;
    int ia[arr_size];
    for(size_t ix=0;ix<arr_size;++ix){
    ia[ix]=ix;
    std::cout<<ia[ix]<<" ";
    }
    return 0;
}