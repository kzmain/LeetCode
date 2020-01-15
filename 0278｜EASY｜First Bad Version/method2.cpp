// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        int l = 1 ;
        int r = n;
        
        while (l < r){
            int mid = l + (r - l) / 2; //takes care of overflow , large int
            if(isBadVersion(mid))
                r = mid;
            else
                l = mid + 1;
        }
        return r;
    }
};