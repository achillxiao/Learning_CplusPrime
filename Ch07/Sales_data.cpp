#include <iostream>
#include <string>
#include "xiao.h"

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

int main()
{
    Sales_data total ;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (trans.bookNo == total.bookNo)
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

//-------------------------FUNC------------------------------

Sales_data::Sales_data( istream &is){
    cout<<"nihao"<<endl;
    read(is,*this);
}
double Sales_data::avg_price() const
{
    if (units_sold)
    {
        return revenue / units_sold;
    }
    else
        return 0;
}
Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
ostream &print(ostream &os, const Sales_data &iterm)
{
    os << iterm.isbn() << " " << iterm.units_sold << " "
       << iterm.revenue << " " << iterm.avg_price();
    return os;
}
istream &read(istream &is, Sales_data &iterm)
{
    double price = 0;
    is >> iterm.bookNo >> iterm.units_sold >> price;
    iterm.revenue = price * iterm.units_sold;
    return is;
}
