#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::string;
using std::vector;

void c03_00()
{
    string a, b;
    std::cin >> a >> b;
    std::cout << a << "  val1--val2   " << b << std::endl;
}
void c03_01()
{
    string world;
    while (std::cin >> world)
    {
        std::cout << world << std::endl;
    }
    int a = 1;
    std::cout << world << "  val1--val2   " << a << std::endl;

    /*
    这里有输入流的概念
    每次回车之后，cin.get()判断是否有数据
    如果要阻塞，可以输入回车之后 ctril z 再回车。
    所以每次回车之后会显示很多不同的world 其实只是此时cin读取完毕，把缓存写出来
    写完之后不会结束，是因为又回到流输入的循环里。
    堵塞之后cin才是真的空才能跳出while循环
    */
}
void c03_02()
{
    string world;
    std::cin >> world;
    std::cout << world << std::endl;
    int a = 1;
    std::cout << world << "  val1--val2   " << a << std::endl;
}
void c03_03()
{
    string line;
    while (getline(std::cin, line))
    {
        std::cout << line << "  val1--val2   " << line.size() << std::endl;
        for (auto c : line)
            std::cout << c << std::endl;
    }
}
void c03_04()
{
    string word("nihao,buyongxie!");
    decltype(word.size()) punct_cnt = 0;
    for (auto a : word)
    {
        if (ispunct(a))
            punct_cnt++;
    }
    std::cout << punct_cnt << std::endl;
}
void c03_05()
{
    string word;
    vector<string> text;
    while (cin >> word)
    {
        text.push_back(word);
    }
    for (auto a : text)
        std::cout << a << std::endl;
}

//______________----------------------__________
int main()
{

    //  c03_00();
    // c03_01();
    // c03_02();
    // c03_03();
    // c03_04();
    c03_05();
    return 0;
}
