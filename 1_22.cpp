/*Упражнение 1.22. Напишите программу, читающую несколько
транзакций с одинаковым ISBN и отображающую сумму всех прочитанных
транзакций*/
#include <iostream>
#include "Sales_item.h"

int main() 
{
    std::cout<<"Enter books with the same ISBN(ISBN,number of books,price):"<<std::endl;
    Sales_item total;
    if (std::cin >> total) {
		Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) 
                total += trans;
            else {               
                std::cout << "Different ISBN" << std::endl;  
                return -1;
            }
		}
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
