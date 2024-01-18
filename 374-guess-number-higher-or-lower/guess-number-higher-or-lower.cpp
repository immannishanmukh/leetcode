class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        int mid = left  + (right-left)/2;
        while(left < right)
        {
            int ans = guess(mid);
            if(ans== 0)return mid;
            else if(ans == -1)
            {
                right = mid-1; 
            } 
            else{
                left = mid + 1;
            }
            mid = left + (right-left)/2;
        }
        return mid ; 
    }
};