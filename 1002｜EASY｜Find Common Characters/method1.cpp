#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> commonChars(std::vector<std::string>& A) {
        int vSize = A.size();
        std::map<char, std::vector<int>> tp = {
                {'a', std::vector<int>(vSize, 0)},
                {'b', std::vector<int>(vSize, 0)},
                {'c', std::vector<int>(vSize, 0)},
                {'d', std::vector<int>(vSize, 0)},
                {'e', std::vector<int>(vSize, 0)},
                {'f', std::vector<int>(vSize, 0)},
                {'g', std::vector<int>(vSize, 0)},
                {'h', std::vector<int>(vSize, 0)},
                {'i', std::vector<int>(vSize, 0)},
                {'j', std::vector<int>(vSize, 0)},
                {'k', std::vector<int>(vSize, 0)},
                {'l', std::vector<int>(vSize, 0)},
                {'m', std::vector<int>(vSize, 0)},
                {'n', std::vector<int>(vSize, 0)},
                {'o', std::vector<int>(vSize, 0)},
                {'p', std::vector<int>(vSize, 0)},
                {'q', std::vector<int>(vSize, 0)},
                {'r', std::vector<int>(vSize, 0)},
                {'s', std::vector<int>(vSize, 0)},
                {'t', std::vector<int>(vSize, 0)},
                {'u', std::vector<int>(vSize, 0)},
                {'v', std::vector<int>(vSize, 0)},
                {'w', std::vector<int>(vSize, 0)},
                {'x', std::vector<int>(vSize, 0)},
                {'y', std::vector<int>(vSize, 0)},
                {'z', std::vector<int>(vSize, 0)},
        };
        for(int i = 0; i < vSize; i++)for(auto c : A[i]) tp[c][i]++;
        std::vector<std::string> rt;
        for(auto& pr : tp){
            std::sort(pr.second.begin(), pr.second.end());
            if(pr.second[0]){
                std::string tmp;
                tmp += pr.first;
                for(int i = 0; i < pr.second[0]; i++) rt.emplace_back(tmp);
            }
        }
        return rt;
    }
};

int main() {
    Solution so;
    auto v1 = std::vector<std::string>{"bella","label","roller"};
    for(auto c : so.commonChars(v1)) std::cout<<c<<" "<<std::endl;
    std::cout << "Result should be: \"e\",\"l\",\"l\". Result: " << std::endl;
    return 0;
}