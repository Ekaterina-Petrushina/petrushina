/*Упражнение 2.41( 1.21). Напишите программу, которая читает два объекта
класса Sales_item с одинаковыми ISBN и вычисляет их сумму*/
#include <iostream>

int main() 
{
    struct Sales_data {
    std::string bookNo;//ISBN
    unsigned units_sold = 0;//кол-во проданных книг
    double revenue = 0.0;// выручка
};
    Sales_data data1, data2;
    double price1=0.0,price2=0.0;
    std::cout<< "Enter books(ISBN,number of books,price):"<<std::endl;
    std::cin >> data1.bookNo >> data1.units_sold>>price1;
    std::cin >> data2.bookNo >> data2.units_sold>>price2;
    data1.revenue=price1*data1.units_sold;
    data2.revenue=price1*data2.units_sold;  
    if (data1.bookNo == data2.bookNo) {
    	std::cout << "Result:"<< data1.revenue+data2.revenue << std::endl;
    	return 0;
	} else {
    	std::cerr << "Different ISBN" << std::endl;
    	return -1;
	}

    return 0;
}