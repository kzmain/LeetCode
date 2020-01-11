#include <iostream>
#include <vector>
//std::string a_in = "1010";
//std::string b_in = "1011";
std::vector<int> in_nums1 = {1,2,3,0,0,0};
std::vector<int> in_nums2 = {2,5,6};
int m_in = 3;
int n_in = 3;

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

    nums1.resize(m + n);     //先re后re都可以，一定要re，否则可能多出几个数
    unsigned long move = nums1.size() - m;
    for(int i = m; i > -1; i--) nums1[i + move] = nums1[i];     //把有效位移到最后，让最前面空出（用于覆盖

    unsigned long o1 = move;
    unsigned long o2 = 0;
    int o_in = 0;
    while(o1 < nums1.size() && o2 < nums2.size()) {   //当nums1和nums2有一个没循环完时，继续       // for/ while
        if(nums1[o1] <= nums2[o2]  ) {
            nums1[o_in] = nums1[o1];
            o1++;
        }
        else {
            nums1[o_in] = nums2[o2];
            o2++;
        }
        o_in++;
    }
    if(o2 != nums2.size()) {              //只需检查nums2完没完，没完就加到nums1里，nums1没完就不用管
        for(; o2 < nums2.size(); o2++){
            nums1[o_in] = nums2[o2];
            o_in++;
        }
    }

}


int main() {
    merge(in_nums1, m_in, in_nums2, n_in);
    auto a = in_nums1;
    return 0;
}

