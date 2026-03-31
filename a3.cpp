/*Упражнение 1.5. В нашей программе весь вывод осуществлял один
большой оператор. Перепишите программу так, чтобы для вывода на экран
каждого операнда использовался отдельный оператор.*/
#include<iostream>
int main(){
    std::cout<<"enter two numbers:"<<std::endl;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout<<"the sum of ";
    std::cout<< v1 ;
    std::cout<<" and ";
    std::cout<< v2 ;
    std::cout<<" is ";
    std::cout<< v1+v2 ;
    std::cout<<std::endl;
    return 0;
}