/*Упражнение 2.38. Приведите пример выражения, где
спецификаторы auto и decltype выведут тот же тип, и пример, где они
выведут разные типы.*/
#include<iostream>
int main(){
    //пример, где один и тот же тип
    int x = 42;
    auto a = x; // a-int       
    decltype(x) d = x;//d-int
    //пример, где разные типы
    const int i=42;
    auto j=i;// j-int тк const верхнего уровня отброшен
    decltype(i) j2=i;// j2-const int
    return 0;
}