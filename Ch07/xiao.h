#ifndef XIAO_H
#define XIAO_H

#include <string>

using std::string;

int cnt_function();
void change_refference(int &ref);
void change_pointer(int *ptr);
const string &compare_length(const string &s1, const string &s2);
auto plus_10(int (&i)[10]) -> int (*)[10];
int *plus_5(int i[] ,int length);

void print(const int *beg , const int *end);

#endif
