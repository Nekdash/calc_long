#ifndef LONG_COUNT_H_INCLUDED
#define LONG_COUNT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

void hello_user();

bool valid(string expression);
string first_num(string expression);
string second_num(string expression);
string operation_id(string expression);

string sum_first(string first, string second);
string sub(string first, string second);
string mult(string first, string second);


string baron(string first, string second, string operation);
string summation(string first, string second);
string subtraction(string first, string second);
string multiplication(string first, string second);

string rm_zeros(string num);

long long itc_len(string str);
string itc_slice_str(string str, int start, int endd);
bool bigger(string first, string second);

#endif // LONG_COUNT_H_INCLUDED
