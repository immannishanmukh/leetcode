class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        string s=a[0] , x ,y;
        int i=0,j;
        int f=0,c=0;
        int n = size(a);
        while (i!=size(s)) {
            for(j=0;j<n;j++) {
                x = a[j];
                if (x[i]==s[i]) {
                    f=1;
                }
                else {
                    return y;
                }
            }
            y = y+s[i];
            i++;
        }
        return y;
    }
};