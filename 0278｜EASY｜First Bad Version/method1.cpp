// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int badVersion(long l, long r){
        int mid = (int)((l + r) / 2 + (l + r) % 2);
        
        if(isBadVersion(mid)){
            r = mid;
        }else{
            l = mid;
        }
        if(l + 1 == r){
            if(isBadVersion(l)){
                return l;
            }else{
                return r;
            }
        }
        return badVersion(l, r);
    }
    
    int firstBadVersion(int n) {
        if(n == 1) return 1;
        return badVersion(1, n);
    }
};