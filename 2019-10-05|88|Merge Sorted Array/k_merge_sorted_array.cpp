#include <iostream>
#include <vector>
#include <list>

//std::vector<int> in_nums1 = {1,2,3,0,0,0};
//int in_m = 3;
//std::vector<int> in_nums2 = {2,5,6};
//int in_n = 3;


//std::vector<int> in_nums1 = {1,2,3,4,5};
//int in_m = 5;
//std::vector<int> in_nums2 ={};
//int in_n = 0;


//std::vector<int> in_nums1 = {2,0};
//int in_m = 1;
//std::vector<int> in_nums2 = {1};
//int in_n = 1;

std::vector<int> in_nums1 = {4,0,0,0,0,0};
int in_m = 1;
std::vector<int> in_nums2 = {1,2,3,5,6};
int in_n = 5;

//题目已经标注 nums1 有足够空间
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    if(nums1.size() == m) return;
    unsigned long start_offset = nums1.size() - m;
    std::reverse(nums1.begin(), nums1.end());
    std::reverse(nums1.begin() + start_offset, nums1.end());
    int n1_offset = 0, n2_offset = 0;
    for(; start_offset < nums1.size(); start_offset++){
        while(n2_offset != nums2.size() && nums1[start_offset] > nums2[n2_offset]){
            nums1[n1_offset] = nums2[n2_offset];
            n1_offset++;
            n2_offset++;
        }
        nums1[n1_offset] = nums1[start_offset];
        n1_offset++;
    }
    for(; n2_offset < nums2.size(); n2_offset++){
        nums1[n1_offset] = nums2[n2_offset];
        n1_offset++;
    }
}

int main() {
    merge(in_nums1, in_m, in_nums2, in_n);
    auto a = in_nums2;
    auto b = in_nums1;
    return 0;
}
