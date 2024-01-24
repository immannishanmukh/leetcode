class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(i==n-1 && isspace(s[i])) n--;
            else if(i!=n-1 && isspace(s[i])) return count;
            else count++;
        }
        return count;
    }
};