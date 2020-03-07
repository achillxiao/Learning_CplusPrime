#include<fstream>
#include<iostream>
#include<sstream>
#include<vector>

using std::ifstream; 
using std::ofstream;
using std::fstream;
using std::istream;
using std::ostream;
using std::string;
using std::istringstream;
using std::cout;
using std::cin;
using std::vector;

struct PersonInfo
{
    string name;
    vector<string> tel;
};

//如何理解IN 和 OUT  不管是fstream 还是 iostream， in 和 out 都是外部内容的程序内代称
//比如说 对于iostream， cin 和 cout 是控制台语句的内部代称
//对于 fstram， ifstream 和oftream是外部文件的内部代称
//所以当 IN>>val 的时候其实指的是把外部内容输入到程序内变量val
//当 OUT << val+“ ” 的时候其实是把内部字面值或者变量内容输出到外部内容
//从这个角度去理解这个箭头和stream就很正确了。

void c08_01()
{
    string add_root = "./Ch08/";
    string add_in = add_root+"textfile.txt";
    string add_out = add_root+"outfile.txt";
    vector<string> con_line;
    ifstream file_in(add_in);
    ofstream file_out(add_out,ofstream::app);
    if(file_in)
    {
        string buf;
        while(getline(file_in,buf))   //file_in >> buf
            con_line.push_back(buf);
    }

    file_out <<"\n"<< __DATE__<<"  "<<__TIME__<<" @ "<<__func__<<std::endl;
    for(auto a : con_line){
        std::cout<<a<<std::endl;
        file_out << a <<std::endl;
    }
    file_out.close();
}
void c08_02()
{
    string add_in = "./Ch08/telephone";
    ifstream file_phoen(add_in);
    vector<PersonInfo> my_contect;
    string line,tels;
    while(getline(file_phoen,line))
    {
        PersonInfo temp;
        istringstream read(line);
        read >> temp.name;
        while(read >> tels )
            temp.tel.push_back(tels);
        my_contect.push_back(temp);
    }
    std::cout<<my_contect.at(2).name<<"  val1--val2   "
            <<my_contect.at(2).tel.at(2)<<std::endl;
}
int main()
{
    
    c08_01();
    c08_02();
    return 0;

}