class Solution {
public:
    bool isHappy(int n)
    {
        int sum=0;
        while(n>0)
        {
            int rem = n%10;
            sum += pow(rem,2);
            n /= 10;
        }
        if(sum==1 )
        {
            return true;
        }
        else if(sum<7)
        {
            return false;
        }
        else
            return isHappy(sum);

    }
};
