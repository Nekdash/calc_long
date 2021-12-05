#include "long_count.h"

long long itc_len(string str){

    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

string itc_slice_str(string str, int start, int endd){
    string res ="";
    if ( endd >= itc_len(str)){
        endd = itc_len(str) - 1;
    }
    if(start > endd){
        return str;
    }else if(start == (itc_len(str) - 1)){
        res += str[itc_len(str) - 1];
        return res;
    }else{
        for ( long long i = start; i <= endd; i++){
        res += str[i];
    }
    return res;
    }

    return "-1";
}

bool bigger(string first, string second){
    if(itc_len(first) > itc_len(second)){
        return true;
    }else if (itc_len(second) > itc_len(first)){
        return false;
    }else{
        for (long long i = 0; i < itc_len(first); i++){
            if(second[i] > first[i]){
                return false;
            }
        }
    }
    return true;
}
