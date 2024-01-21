class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,c=0,cm=0;
        for (i=0;i<size(nums);i++) {
            if (nums[i]==1) c++;
            else { cm = max(cm,c) ; c=0 ;}
        }
        return max (cm,c);
    }
};