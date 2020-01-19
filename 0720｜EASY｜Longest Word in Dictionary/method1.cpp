#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


class Solution {
public:
    std::string update(std::string pre, std::string res){
        int pSize = pre.size(), rSize = res.size();
        if(pSize >  rSize){return pre;}
        else if(pSize == rSize){
            for(int i = 0; i < pSize; i++){
                if(pre[i] < res[i]){return pre;}
                else if(pre[i] > res[i]){return res;}
            }
        }
        return res;
    }

    std::string longestWord(std::vector<std::string>& words) {
        std::sort(words.begin(), words.end());
        std::string res, pre; std::set<std::string> inner{""};
        for(auto& word : words){
            if(word.size() == 1){res = update(pre, res); pre = "";}
            int wSize = word.size(), pSize = pre.size();
            std::string wSub = word.substr(0, wSize - 1);
            if(inner.count(wSub)){
                inner.insert(word);
                if     (pSize == wSize) pre = update(pre, res);
                else if(pSize <  wSize) pre = word;
            }
        }
        res = update(pre, res);
        return res;
    }
};

int main(){
    Solution so;
    //apple
    auto t1 = std::vector<std::string>{"a","banana","app","appl","ap","apply","apple"};
    //latte
//    auto t1 = std::vector<std::string>{"m","mo","moc","moch","mocha","l","la","lat","latt","latte","c","ca","cat"};
    //mocha
//    auto t1 = std::vector<std::string>{"m","mo","moc","moch","mocha"};
    //yodn
//    auto t1 = std::vector<std::string>{"yo","ew","fc","zrc","yodn","fcm","qm","qmo","fcmz","z","ewq","yod","ewqz","y"};
    //eyj
//    auto t1 = std::vector<std::string>{"ogz","eyj","e","ey","hmn","v","hm","ogznkb","ogzn","hmnm","eyjuo","vuq","ogznk","og","eyjuoi","d"};
    //otif
//    auto t1 = std::vector<std::string>{"rac","rs","ra","on","r","otif","o","onpdu","rsf","rs","ot","oti","racy","onpd"};
std::cout<<so.longestWord(t1);
}