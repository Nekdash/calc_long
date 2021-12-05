#include "long_count.h"

string odin(string first){
    long long i = itc_len(first) - 1;
    while(i >= 0){
        if(first[i] != '0'){
            first[i] -= 1;
            string temp = "";
            for(long long j = 0; j <= itc_len(first) - i -2; j++){
                temp += "9";
            }
            first = itc_slice_str(first , 0, i -1 ) + first[i] + temp;
            return first;
        }
        i--;
    }
    return "-";

}



string sub(string first, string second){
    //cout << "SUBTRACTION "<< first << " and " << second << endl;
    string sign = "0";
    if(!bigger(first, second)){
        string temp = first;
        first = second;
        second = temp;
        sign = "-";
    }
    long long i = itc_len(first) - 1, j = itc_len(second) - 1;
    //int chip = 1;
    for(i; i >= 0;i--){
        if(j >= 0){
            if(first[i] - second[j] + 48 < 48){
                first[i] = first[i] - second[j] + 48 + 10;
                if(i - 1 > 0){
                    first = odin(itc_slice_str(first, 0 , i - 1)) + itc_slice_str(first, i, itc_len(first));
                }else{
                    first = "-" + first;
                }
            }else{
                first[i] = first[i] - second[j] + 48;
            }
        }else break;
        j--;
    }
    return sign + first;
}

