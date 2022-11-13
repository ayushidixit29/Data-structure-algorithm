class Solution {
public:
    int mySqrt(int x) {
        
        if(x <= 1)
            return x;
        return (sqrt(x));
        
    }
    void main()
    {
        int x=7;
        cout << mySqrt(x) << '\n';
    }
}
