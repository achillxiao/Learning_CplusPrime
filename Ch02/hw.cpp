#include<iostream>

void c01_00(){
    int val;
     val= 6;
     std::cout<<"Tes7t  "<<val<<std::endl;
}
void c02_01(){
    double dl  = 3.1415926;
    int a = dl;
    // int b{dl};
    // int c = {dl};
    int d(dl);
}
void c02_02(){
    int ival = 1024;
    int &ref_val = ival;
    // int &ref_val2;
    ref_val+=20;
    std::cout<< ival<<"ival-reference"<<ref_val<<std::endl;
}
void c02_03(){
    int a =23;
    int *pa = &a;
    std::cout<<pa<<"  -address-value-  "<<*pa<<std::endl;
    int *p2 = nullptr;
    *pa += 20;
    std::cout<<*pa<<"  -*PA---A-  " << a <<std::endl;
    std::cout<<p2<<std::endl;

}
void c02_04(){
    int i = 42;
    int *p;
    int *&k = p; 

    k = &i;
    std::cout<<p<<"  K and *K " << *p<<std::endl;
}
void c02_05(){
    int i =0;
    const int a = 2;
    const int b = 5;
    const int *pa = &a;
    // *pa = 22;
    std::cout<<*pa<<std::endl;
    pa = &i;
    std::cout<<*pa<<std::endl;
    int *const pa2 = &i;
    std::cout<<*pa2<<std::endl;
    pa = &a;
    std::cout<<*pa2<<std::endl;

}

void c02_06(){
    
    

}
struct nono
    {
        /* data */
    };

//______________----------------------__________
 int main(){

    //  c01_00();
    // c02_01();
    // c02_02();
    // c02_03();
    // c02_04();
    // c02_05();
     return 0;
 }
