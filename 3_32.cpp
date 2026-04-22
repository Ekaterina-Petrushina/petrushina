/*Упражнение 3.32. Скопируйте массив, определенный в предыдущем
упражнении, в другой массив. Перезапишите эту программу так, чтобы
использовались векторы.*/
#include<iostream>
int main(){
    constexpr size_t arr_size=10;
    int ia[arr_size];
    for(size_t ix=0;ix<arr_size;++ix){
    ia[ix]=ix;
    }
    int ia2[arr_size];
    for(size_t i=0;i<10;++i){
        ia2[i]=ia[i];
        std::cout<<ia2[i]<<" ";
    }
    return 0;
}