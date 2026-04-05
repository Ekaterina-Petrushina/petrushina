/*Упражнение 2.42( 1.21). Напишите программу, которая читает два объекта
класса Sales_item с одинаковыми ISBN и вычисляет их сумму*/
#include <iostream>
#include "Sales_data.h"
int main() 
{
    Sales_data data1, data2;
    std::cout<< "Enter books(ISBN,number of books,price):"<<std::endl;
    std::cin >> data1.bookNo >> data1.units_sold>>data1.price;
    std::cin >> data2.bookNo >> data2.units_sold>>data2.price;
    data1.revenue=data1.price*data1.units_sold;
    data2.revenue=data2.price*data2.units_sold;  
    if (data1.bookNo == data2.bookNo) {
    	std::cout << "Result:"<< data1.revenue+data2.revenue << std::endl;
    	return 0;
	} else {
    	std::cerr << "Different ISBN" << std::endl;
    	return -1;
	}

    return 0;
}