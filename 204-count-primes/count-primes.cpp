class Solution {
public:
    int countPrimes(int n) {
        int i , c=0 , j;
        if (n==0 or n==1) return 0;

        vector <int> v (n,0);
        v[0] = v[1] = 1;
        for (i=2;i*i<n;i++) { 
            if (v[i]==0) {
                for (j=i*i;j<n;j=j+i) { v[j]=1; }
            }
        }
        for (i=2;i<n;i++) {
            if (v[i]==0) { c++;}
        }
        return c;
    }
};