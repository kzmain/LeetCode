#include <iostream>
#include <vector>

class Solution {
public:
    int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) {
        int count = 0;
        for(int i = 1; i < points.size(); i ++){
            int sx = points[i - 1][0];int dx = points[i][0];
            int sy = points[i - 1][1];int dy = points[i][1];
            if(!(sx - dx) or !(sy - dy)){count += std::abs(sx - dx + sy - dy);}
            else{
                int absMX = std::abs(sx - dx);
                int absMY = std::abs(sy - dy);
               if(absMX < absMY){sy += absMX * (dy - sy) / absMY; count += absMX; count += std::abs(dy - sy);}
               else             {sx += absMY * (dx - sx) / absMX; count += absMY; count += std::abs(dx - sx);}
            }
        }
        return count;
    }
};

int main() {
    Solution so;
    auto t1 = std::vector<std::vector<int>>{{1,1},{3,4},{-1,0}};
    auto t2 = std::vector<std::vector<int>>{{3,2},{-2,2}};
    auto t3 = std::vector<std::vector<int>>{{431,91},{838,-127}};
    std::cout<<"T1: "<<so.minTimeToVisitAllPoints(t1)<<" "<<std::endl;
    std::cout<<"T2: "<<so.minTimeToVisitAllPoints(t2)<<" "<<std::endl;
    std::cout<<"T3: "<<so.minTimeToVisitAllPoints(t3)<<" "<<std::endl;
    return 0;
}
