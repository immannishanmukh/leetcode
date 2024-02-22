#include <vector>

class Solution {
public:
    int findJudge(int N, std::vector<std::vector<int>>& trust) {
        std::vector<int> l(N + 1, 0);
        std::vector<int> l2(N + 1, 0);
        
        for (const auto& i : trust) {
            l2[i[0]]++;
            l[i[1]]++;
        }
        
        for (int j = 1; j <= N; j++) {
            if (l[j] == N - 1 && l2[j] == 0) {
                return j;
            }
        }
        
        return -1;
    }
};
