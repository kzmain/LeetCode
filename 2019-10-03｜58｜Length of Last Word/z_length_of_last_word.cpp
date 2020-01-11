#include <iostream>
#include <string>

std::string in = "a b cd ";

int lengthOfLastWord(std::string s) {

    int len = 0;
    bool next = true;
    for(auto c : s){
        if(c != ' '){
            if(next){
                next = false;
                len = 0;
            }
            len++;
        }
        else{next = true;}
    }
    return len;
}


int main() {
//    merge(in_nums1, m_in, in_nums2, n_in);
//    auto a = in_nums1;
    auto a = lengthOfLastWord(in);
}

