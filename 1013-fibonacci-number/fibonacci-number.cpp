class Solution {
public:
    int fun(int a) {
        if (a<=1 ) {
            return a;
        }
        return fun(a-1)+fun(a-2);
    }
    // int fun(int i,int a, int b) {
    //     if (i==0) return a;

    //     return fun(--i,b,a+b);
    // }
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;

        // int  x  = fun(n,0,1);
        int  x  = fun(n);
        cout << x;
        // return x;
        return x;
    }
};