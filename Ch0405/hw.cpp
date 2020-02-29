#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::string;
using std::vector;
unsigned int get_bufCnt(){

    return 0;
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


void c04_00(){
    vector<int> a{1,2,3,2,4,3,3};
    for(auto it = a.begin();it!=a.end()&&*it<4;it++){
        // *it = 0;
        std::cout<<*it<<std::endl;
    }
    for(auto it = a.begin(); it!=a.end() && *it <4 ; ++it){
        std::cout<<*it<<"==="<<std::endl;
    }
    // for(const auto &ref : a){
    //     std::cout<<ref<<std::endl;
    // }
}
void c04_01(){
    vector<int> ivect{2,4,2,3,32,5,45,24,1};
    vector<int>::size_type cnt = ivect.size();
    for(vector<int>::size_type ix =0;
                    ix!= ivect.size(); ++ix ,--cnt)
        ivect[ix] = cnt;
    for(const int &i : ivect )
        std::cout<<i<<std::endl;
}
void c04_02(){
    string str;
    while(cin>>str && str!="cpp")
        ;
    std::cout<<str<<std::endl;
}
void c04_03(){
    const unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }
}
void c04_04(){
    vector<int> num;
    for(int i ; cin>> i;)
        num.push_back(i);
    for(const int &i: num)
        std::cout<<i<<std::endl;
}
void c04_05(){
    vector<string> str;
    string str_temp;
    while(cin>> str_temp){
        if(!str.empty()){
            if(str_temp == str[str.size()-1]){
                std::cout<<"label:"<<str_temp<<std::endl;
            }
        }
        str.push_back(str_temp);
    }
}
void c04_06(){
    for(size_t i = 0; i!=10 ; ++i)
        std::cout<<cnt_function()<<"  val1--val2   "<<i<<std::endl;
}

int main(){
    // c04_00();
    // c04_01();
    // c04_02();
    // c04_04();
    // c04_05();
    c04_06();
    return 0;
}
