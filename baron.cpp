#include "long_count.h"

string summation(string first, string second){
    string answer = "!!! SOMETHING WENT WRONG !!!";
    if(first[0] == '-' && second[0] == '-'){
            first = "0" + itc_slice_str(first, 1 , itc_len(first) - 1);
            second = "0" + itc_slice_str(second, 1, itc_len(second) - 1);
            answer = "-" + sum_first(first, second);
        }else if (first[0]=='-'){
            first = "0" + itc_slice_str(first, 1 , itc_len(first) - 1);
            answer = sub("0" + second, first);
        }else if(second[0] == '-'){
            second = "0" + itc_slice_str(second, 1, itc_len(second) -1);
            answer = sub("0" + first, second);
        }else if(second[0] != '-' && first[0] != '-'){
            answer = sum_first("0" + first, "0" + second);
        }
        return answer;
}

string subtraction(string first, string second){
    string answer = "!!! SOMETHING WENT WRONG !!!";
    if(first[0] == '-' && second[0] == '-'){
            first = "0" + itc_slice_str(first, 1 , itc_len(first) - 1);
            second = "0" + itc_slice_str(second, 1, itc_len(second) - 1);
            answer =  sub(second, first);
        }else if (first[0]=='-'){
            first = "0" + itc_slice_str(first, 1 , itc_len(first) - 1);
            answer = "-" + sum_first("0" + second, first);
        }else if(second[0] == '-'){
            second = "0" + itc_slice_str(second, 1, itc_len(second) -1);
            answer = sum_first("0" + first, second);
        }else if(second[0] != '-' && first[0] != '-'){
            answer = sub("0" + first, "0" + second);
        }
        return answer;

}

string multiplication(string first, string second){
    string answer = "!!! SOMETHING WENT WRONG !!!";
    if(first[0] == '-' && second[0] == '-'){
            first = "0" + itc_slice_str(first, 1 , itc_len(first) - 1);
            second = "0" + itc_slice_str(second, 1, itc_len(second) - 1);
            answer =  mult(first, second);
        }else if (first[0]=='-'){
            first = "0" + itc_slice_str(first, 1 , itc_len(first) - 1);
            answer = "-" + mult("0" + second, first);
        }else if(second[0] == '-'){
            second = "0" + itc_slice_str(second, 1, itc_len(second) -1);
            answer = "-" + mult("0" + first, second);
        }else if(second[0] != '-' && first[0] != '-'){
            answer = mult("0" + first, "0" + second);
        }
        return answer;

}
