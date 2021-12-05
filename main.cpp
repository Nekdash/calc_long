#include <iostream>
#include "long_count.h"
using namespace std;

int main()
{

    string expression = "", answer, ans, first, second, operation;
    hello_user();
    while(true){
    cout << "Enter the expression : <first number> < + or - or * or / > <second number>" << endl;
    getline(cin, expression);

    ///  raise the error if letters
     if (valid(expression)){
        /// divide to numbers and identify operator
        first =   first_num(expression);
        second =   second_num(expression);
        operation = operation_id(expression);
        //cout << "FIRST:  " << first << endl;
        //cout << "SECOND:  " << second << endl;

        /// identify signs of numbers -> call the function
        answer = baron(first, second, operation);
        /// print out the answer;
        cout << "ANSWER: " << rm_zeros(answer) << endl;
        cout << endl;
        cout << endl;

     }else{
        cout << "!!! INVALID EXPRESSION !!!" << endl;

     }}
    return 0;
}
