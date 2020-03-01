#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "xiao.h"

using std::vector;
using std::cin;
using std::string;
using std::begin;
using std::end;

void c06_00(){
    for(size_t i = 0; i!=10 ; ++i)
        std::cout<<cnt_function()<<"  val1--val2   "<<i<<std::endl;
}
void c06_01(){
    int a =22;
    std::cout<<a<<std::endl;
    change_refference(a);
    std::cout<<a<<std::endl;
    change_pointer(&a);
    std::cout<<a<<std::endl;
}
void c06_02(){
    string s1 = "thanks";
    string s2 = "thankyou";
    string result = compare_length(s1,s2);
    std::cout<<result<<std::endl;

}
void c06_03(){
    int a[] = {12,33,22,23,44,21,32,93,22,10};  
    int *b = plus_5(a,10);
    for(int k =0;k!=10;++k)
       std::cout<<b[k]<<std::endl;
    int (*pa)[10] = plus_10(a);
    std::cout<<pa<<"  val1--val2   "<<(*pa)[2]<<std::endl;
    print(begin(a),end(a));
}
void c06_04(){
    string word;
    int threshold = 30;
    cin>> word;
    if(word.size() <30){
        std::cerr<<"Error:"<< __FILE__
                <<":in function-- "<<__func__
                <<" -- at line:"<<__LINE__<<std::endl
                <<"  @@compiled on: "<<__DATE__
                <<" at : "<< __TIME__<<std::endl
                <<"     World read was: \""<<word
                <<"\" :Length too short<"<<threshold<<std::endl;
    }
}
//-------------------MAIN-------------------
int main(int argc , char *argv[]){
    // c06_00();
    // c06_01();
    // c06_02();
    // c06_03();
    c06_04();

    // string str;
    // for(int i =0; i!=argc;++i)
    //     str += string(argv[i])+"-";
    // std::cout<<str<<std::endl;
    // std::cout<<argc<<std::endl;
    
    return 0;
}

//-----------------FUNCTION-----------------
void print(const int *beg , const int *end){
    for(;beg!=end;++beg)
        std::cout<<*beg<<std::endl;
}
int cnt_function (){
    static int cnt = 0;
    if(cnt)
        return cnt++;
    else{
        ++cnt;
        return 0;
    }
}
void change_refference(int &ref){
    ref =0;
}
void change_pointer(int *ptr){
    *ptr = 122;
}
const string &compare_length(const string &s1, const string &s2){
    return (s1>s2 ? s1:s2);
}
auto plus_10(int (&i)[10]) -> int (*)[10]{
    for(int k=0;k<10;++k){
        i[k]+=10;
    }
    //int aa[]={12,21,2,123,21,3,213,21,3,21};
    //int (*temp)[10] = &aa ;
    return &i;
}
int *plus_5(int i[],int length){
    for(int k=0 ;k!=length;++k){
        i[k]+=5;
    }
    return i;
}