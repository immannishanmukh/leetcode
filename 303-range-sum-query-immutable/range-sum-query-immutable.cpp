class NumArray {
public:
    vector <int> pre;
    NumArray(vector<int>& nums) {
        pre.emplace_back(nums[0]);
        for(int i=1;i<size(nums);i++) {
            pre.emplace_back(nums[i]+pre[i-1]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left!=0) return pre[right]-pre[left-1];
        return pre[right]; 
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */