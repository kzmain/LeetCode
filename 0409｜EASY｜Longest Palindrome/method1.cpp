#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int longestPalindrome(std::string s) {
        std::vector<int> alpha(26 * 2, 0);
        int sum = (int)s.size();
        for(char c : s){
            if(c > 96) alpha[c - 71]++;
            else       alpha[c - 65]++;
        }
        for(int cnt : alpha) if(cnt % 2) sum--;
        if(sum == s.size()) return sum; else return sum + 1;
    }
};

int main() {
    Solution so;
    std::string str1 =  "abccccdd";
    std::string str2 =  "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    std::string str3 =  "dd";
    std::cout << "Result should be: 7  . Result: " << so.longestPalindrome(str1) << std::endl;
    std::cout << "Result should be: 983. Result: " << so.longestPalindrome(str2) << std::endl;
    std::cout << "Result should be: 2  . Result: " << so.longestPalindrome(str3) << std::endl;
    return 0;
}
