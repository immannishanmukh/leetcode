class Solution {
public:
    int climbStairs(int n) {
       int i;
        vector <int> a(n,0);
        for (i=0;i<n;i++) {
		if (i==0) {
			a[i]=1;
		}
		else if (i==1) {
			a[i]=2;
		}
		else {
			a[i]=a[i-1]+a[i-2];
		}
	}
    return a[n-1];
    }
};