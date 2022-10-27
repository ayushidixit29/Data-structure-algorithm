class Solution {
public:
    int fib(int n) {
        int l=0;
        int r=1;
        while(n)
        {
            int temp=r;
            r=r+l;
            l=temp;
            n--;
        }
        return l;
    }
};
