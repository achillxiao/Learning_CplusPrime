#include <iostream>
#include <string>
#include <vector>
#include "xiao.h"

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

}

//-------------------MAIN-------------------
int main(){
    // c06_00();
    // c06_01();
    c06_02();
    return 0;
}

//-----------------FUNCTION-----------------
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