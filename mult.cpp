#include "long_count.h"

string power(long long num){
    string res = "";
    if(num == 0) return "";
    for(long long i = 1; i <= num; i++){
        res += "0";
    }
    return res;
}

string mult_one(string first, char n){
    string answer = "0";
    if(n == '0') return "0";
    for(char i = '0'; i < n; i++ ){
        answer = sum_first(answer, first);
    }
    return answer;
}


string mult(string first, string second){
    if (first == "0" || second == "0") return "0";
    //cout << "MULTIPLICATION OF: " << first << " and " << second << endl;
    //first = rm_zeros(first);
    //second = rm_zeros(second);
    if(!bigger(first, second)){
        string temp = first;
        first = second;
        second = temp;
    }
    string answer = "0", temp = "0";
    for(long long i = itc_len(second) - 1; i >= 0; i--){
        temp = mult_one(first, second[i]) + power(itc_len(second) - 1 - i);
        answer = sum_first(answer, temp);
    }
        //answer = itc_slice_str(answer, 0, itc_len(answer) - 2);

    return answer;
}
