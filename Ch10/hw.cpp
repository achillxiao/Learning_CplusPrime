#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::string;


void c10_01()
{
    vector<int> a{13,23,214,22,21,43,22,24};
    int cnt = count(a.begin(),a.end(),22);
    auto pos = find(a.begin(),a.end(),23);
    std::cout<<cnt<<"  val1--val2   "<< pos-a.begin()<<std::endl;
}
void c10_02()
{
    int a[] = {32,4,324,32,41,4,23,4};
    int b[sizeof(a)/sizeof(*a)];
    std::cout<<sizeof(b)<<"  val1--val2   "<<sizeof(a)<<std::endl;
}
void c10_03()
{
    vector<string>::size_type sz , cnt;
    sz = 5;
    cnt = 0;
    vector<string> words {"hello","yours","month","year","dylan","xiao"};
    auto iter = words.begin();
    while(iter!=words.end())
    {
        iter = find_if(iter,words.end(),
                            [sz](const string &s)
                                {return s.size()==sz; });
        if(iter!=words.end()){
            std::cout<<iter-words.begin()+1<<"  order -- value  "<<*iter<<std::endl;
            ++iter;
        }
        else
            break;
    }
}

int main()
{
    // c10_01();
    // c10_02();
    c10_03();
    return 0;
}