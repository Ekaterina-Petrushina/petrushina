/*Упражнение 2.7. Какие значения представляют эти литералы? Какой
тип имеет каждый из них?
(a) "Who goes with F\145rgus?\012"
(b) 3.14e1L (c) 1024f (d) 3.14L*/
#include<iostream>
int main(){
    std::cout <<"Who goes with F\145rgus?\012" << std::endl;
    std::cout <<3.14e1L << std::endl;//long double
    std::cout << 1024.f << std::endl;//float
    std::cout << 3.14L << std::endl;//long double
    return 0;
}