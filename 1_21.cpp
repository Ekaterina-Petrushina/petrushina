/*Упражнение 1.21. Напишите программу, которая читает два объекта
класса Sales_item с одинаковыми ISBN и вычисляет их сумму*/
#include <iostream>
#include "Sales_item.h"

int main() 
{
    Sales_item item1, item2;
    std::cout<< "Enter books(ISBN,number of books,price):"<<std::endl;
    std::cin >> item1 >> item2;  
    if (item1.isbn() == item2.isbn()) {
    	std::cout << "Result:"<< item1 + item2 << std::endl;
    	return 0;
	} else {
    	std::cerr << "Different ISBN" << std::endl;
    	return -1;
	}

    return 0;
}