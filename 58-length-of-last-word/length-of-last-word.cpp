class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 0, c=0;
        int n=size(s);
        for (i=n-1;0<=i;i--) {
        if (s[i]==' ' and i==n-1) n--;
        else if (s[i] == ' ' and i!=n-1) return c;
        else c++;
        }
         return c;
    }
};