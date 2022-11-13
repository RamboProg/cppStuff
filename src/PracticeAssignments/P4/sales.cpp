#include <iostream>
using namespace std;

struct Sales_data{
    string bookNo;
    unsigned units_sold;
    double revenue;
};

int checkBooks(Sales_data book1, Sales_data book2){
    if(book1.bookNo == book2.bookNo){
        unsigned totalUnits = book1.units_sold + book2.units_sold;
        double totalRev = book1.revenue + book2.revenue;
        cout<<"Total units sold: "<<totalUnits<<"\n Total revenue gained: "<<totalRev<<"\n The average revenue is: "<<totalRev/totalUnits<<endl;
        return 0;
    }else return -1;
}

int main(){

    return 0;
}
