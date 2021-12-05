#include "long_count.h"

string sum_first(string first, string second){
    //cout << "SUMMATION " << first << " and " << second<< endl;
    if(itc_len(first) < itc_len(second)){
        string temp = first;
        first = second;
        second = temp;
    }
    int chip = 0;
    long long j = itc_len(second) -1;
    for ( long long i = itc_len(first) - 1; i >= 0; i--){
        if(j >= 0){
            if(first[i] + second[j] + chip - 48 > 57){ first[i] = first[i] + second[j] + chip - 58; chip = 1;}
            else{ first[i] = first[i] + second[j] + chip - 48; chip = 0;}
        }
        else{
                if(first[i] + chip > 57){
                    first[i] = first[i] + chip - 10;
                    chip = 1;
                }else{
                    first[i] = first[i] + chip;
                    chip = 0;
        }}
        j--;
    }
    return first;

}



