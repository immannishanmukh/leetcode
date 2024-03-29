class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int> s ;
        int n=temperatures.size();
      //  cout << n;
        vector<int> a(n,0);
         s.push(n-1);
         for (int i=n-2 ;i>=0 ;i--) {
             while (!s.empty() && temperatures[s.top()] <= temperatures[i]) {
                 s.pop();
             }
            // cout << temperatures[s.top()];
             if (!s.empty()) {
                 int x=abs(s.top()-i);
                 a[i]=x;
             }
             s.push(i);
         }
        return a;
    }
};