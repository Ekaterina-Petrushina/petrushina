#include<iostream>
#include<string>
int main(){
    struct Sales_data {
    std::string bookNo;//ISBN
    unsigned units_sold = 0;//кол-во проданных книг
    double revenue = 0.0;// выручка
};
    Sales_data book1,book2;
    double price1=1.0,r=0.0,price2=1.0;
    std::cout<< "Enter book1 (ISBN,number of books,price):"<<std::endl;
    std::cin >> book1.bookNo >> book1.units_sold>>price1;
    book1.revenue=price1*book1.units_sold;
    std::cout<< "Enter book2 (ISBN,number of books,price):"<<std::endl;
    std::cin >> book2.bookNo>> book2.units_sold>>price2;
    book2.revenue=price2*book2.units_sold;
    if(book1.bookNo==book2.bookNo){
     r=book1.revenue+book2.revenue;
    std::cout<<"All price of ISBN: "<<book1.bookNo<<" is "<< r<< std::endl;
    }
    else{
     std::cout<<"All price of ISBN: "<<book1.bookNo<<" is "<< book1.revenue<< std::endl;
     std::cout<<"All price of ISBN: "<<book2.bookNo<<" is "<< book2.revenue<< std::endl;

    }
    return 0;
}
