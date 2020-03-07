#include<vector>
#include<list>
#include<string>
#include<iostream>
#include<iterator>
using std::vector;
using std::string;
using std::list;
using std::iterator;
void  print_vstring(vector<string> &str);

void c09_01()
{
    vector<string> str ={"andrew","yang","jone33"};
    list<const char*> article ={"yes","you","nno"};
    print_vstring(str);
    str.assign(article.begin(),article.end());
    print_vstring(str);

}
void c09_02()
{
    vector<int> a = {1 ,4 ,23 , 323, 4};
    std::cout<<a[4]<<std::endl;
    std::cout<<a.at(4)<<std::endl;
    std::cout<<a.at(5)<<std::endl;
    // std::cout<<a[5]<<std::endl;
    std::cout<<"label"<<std::endl;
}
void c09_03()
{
    const char* test = "dfe,afoa.dsaf wgwgwegw";
    string s;
    s.assign(test,7);
    s.insert(s.size(),test+7);
    std::cout<<s<<std::endl;
}
void c09_04()
{
    string numbers = "0123456789";
    string test = "dsew3ds25b2fsai2h58sdfs92rh82ds33hr934ti2t";
    string::size_type pos = 0;
    while ((pos=test.find_first_of(numbers,pos))!=string::npos)
    {
        std::cout<<test[pos]<<"  val1--val2   "<<pos<<std::endl;
        pos++;
    }

}
void c09_05()
{
    int a = 3;
    string num = "pi = ";
    num += (std::to_string(a) + ".1415926");
    double result = stod(num.substr(num.find_first_of("+-.0123456789")));
    ;
}

int main(){
    // c09_01();
    // c09_02();
    // c09_03();
    // c09_04();
    c09_05();
    return 0;
}
void  print_vstring(vector<string> &str)
{
    auto beg = str.begin();
    auto end = str.end();
    for( ; beg != end ; ++beg)
    {
        std::cout<<*beg<<std::endl;
    }
}