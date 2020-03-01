#include<iostream>
#include<string>

using std::string; using std::cin; using std::cout; using std::endl;

struct Sales_data
{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold =0;
    double revenue = 0;
};

int main(){
    Sales_data total;
    if( cin >> total.bookNo>>total.units_sold>>total.revenue){
        Sales_data trans;
        while(cin >> trans.bookNo>>trans.units_sold>>trans.revenue){
            if(trans.bookNo == total.bookNo){
                total.revenue+=trans.revenue;
                total.units_sold+=trans.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
            
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;

}
