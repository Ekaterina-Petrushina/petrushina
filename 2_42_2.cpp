/*Упражнение 2.42(1.22). Напишите программу, читающую несколько
транзакций с одинаковым ISBN и отображающую сумму всех прочитанных
транзакций*/
#include <iostream>
#include"Sales_data.h"

int main() 
    {
    std::cout<<"Enter books with the same ISBN(ISBN,number of books,price):"<<std::endl;
    Sales_data total;
    //std::cin >> total.bookNo >> total.units_sold>>price1;
    if (std::cin >> total.bookNo >> total.units_sold>>total.price) {
        total.revenue=total.price*total.units_sold;
		Sales_data trans;
        double price2=0.0;
        while (std::cin >> trans.bookNo >> trans.units_sold>>trans.price) {
             trans.revenue=trans.price*trans.units_sold;
            if (total.bookNo == trans.bookNo){ 
            total.revenue+= trans.revenue;  
            } 
            else {               
                std::cout << "Different ISBN" << std::endl;  
                return -1;
            }
		}
        std::cout <<"All price of books with the same ISBN: "<<total.bookNo<<" is "<<total.revenue << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
