#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if(numRows < 1) throw;
        if(numRows == 1) return s;
        int  r_bound = numRows - 1;       //Row bound
        int  l_bound = (int)s.size() - 1; //Location bound
        bool flag;                        //Is first row or last row
        std::string result;
        for(int row = 0; row <= r_bound; row++){
            flag = !(row == 0 || row == r_bound);
            int loc = 0, nth_element = 0;
            do{
                if(flag){
                    loc = (numRows * 2 - 2) * nth_element - row;
                    if(loc > 0 && loc <= l_bound) result += s[loc];
                }
                loc = (numRows * 2 - 2) * nth_element + row;
                if(loc <= l_bound) result += s[loc];
                nth_element++;
            }while(loc <= l_bound);
        }
        return result;
    }
};

int main(){
    Solution so;
    std::cout<<so.convert("PAYPALISHIRING", 3)<<std::endl;
}