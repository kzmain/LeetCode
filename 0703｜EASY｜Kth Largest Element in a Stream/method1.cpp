#include <iostream>
#include <vector>
#include <set>

class KthLargest {
    std::vector<int> inner;
    int  size = 0;
public:
    KthLargest(int k, std::vector<int>& nums) {
        inner.resize(size = k);
        std::sort(nums.rbegin(), nums.rend());
        int loc = 0;
        for(; loc < size && loc < nums.size(); loc++) inner[loc] = nums[loc];
        if(loc == size - 1) inner[size - 1] = INT_MIN;
    }

    int add(int val) {
        if(val <= inner[size - 1]) return inner[size - 1];
        int loc = 0;
        while(inner[loc] >= val and loc < size)loc++;
        for(int i = size - 1; i > loc; i--){
            inner[i] = inner[i - 1];
        }
        inner[loc] = val;
        return inner[size - 1];
    }
};

int main(){
    std::vector<int> t1 = std::vector<int>{4,5,8,2};
    KthLargest kth = KthLargest(3, t1);
//    std::cout<<kth.add(3) <<" ";   // returns 4
    std::cout<<kth.add(5) <<" ";   // returns 5
    std::cout<<kth.add(10)<<" ";   // returns 5
    std::cout<<kth.add(9) <<" ";   // returns 8
    std::cout<<kth.add(4) <<" ";   // returns 8
    std::cout<<"";
}