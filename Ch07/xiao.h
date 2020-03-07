#ifndef XIAO_H
#define XIAO_H

#include <string>
#include <iostream>

using std::string; using std::cin; using std::cout; using std::endl;
using std::istream; using std::ostream;

class Sales_data
{
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend ostream &print(ostream&,const Sales_data&);
    friend istream &read(istream&, Sales_data&);

    double avg_price() const
        { return units_sold? revenue/units_sold : 0;}
    string bookNo;
    unsigned units_sold =0;
    double revenue = 0.0;

public:
    Sales_data() = default;
    Sales_data(const string &s , unsigned &u , double p):bookNo(s),
                            units_sold(u),revenue(u*p){}
    Sales_data(const string &s):bookNo(s){}
    Sales_data(istream&);

    string isbn() const {return this->bookNo;}
    Sales_data& combine(const Sales_data&);
};


Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&,const Sales_data&);
istream &read(istream&, Sales_data&);

#endif
