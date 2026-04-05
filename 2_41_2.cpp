/*Упражнение 2.41(1.22). Напишите программу, читающую несколько
транзакций с одинаковым ISBN и отображающую сумму всех прочитанных
транзакций*/
#include <iostream>

int main() 
    {
    struct Sales_data {
    std::string bookNo;//ISBN
    unsigned units_sold = 0;//кол-во проданных книг
    double revenue = 0.0;// выручка
    };
    std::cout<<"Enter books with the same ISBN(ISBN,number of books,price):"<<std::endl;
    Sales_data total;
    double price1=0.0;
    //std::cin >> total.bookNo >> total.units_sold>>price1;
    if (std::cin >> total.bookNo >> total.units_sold>>price1) {
        total.revenue=price1*total.units_sold;
		Sales_data trans;
        double price2=0.0;
        while (std::cin >> trans.bookNo >> trans.units_sold>>price2) {
             trans.revenue=price1*trans.units_sold;
            if (total.bookNo == trans.bookNo){ 
            total.revenue+= trans.revenue;  
            } 
            else {               
                std::cout << "Different ISBN" << std::endl;  
                return -1;
            }
		}
        std::cout << total.revenue << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
