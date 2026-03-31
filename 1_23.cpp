/*Упражнение 1.23. Напишите программу, которая читает несколько
транзакций и подсчитывает количество транзакций для каждого ISBN.*/
#include <iostream>
#include "Sales_item.h"

int main() 
{
    std::cout<<"Enter books with the same ISBN(ISBN,number of books,price):"<<std::endl;
    int c=1;//счетчик
    Sales_item total;
    if (std::cin >> total) {
		Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                ++c;
            }   
            else {
                std::cout<<"numbers of ISBN: "<<total.isbn()<<" is "<<c<<std::endl; 
                c=1;
                total=trans;     
            }
		}
        std::cout<<"numbers of ISBN: "<<total.isbn()<<" is "<<c<<std::endl;
        
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}