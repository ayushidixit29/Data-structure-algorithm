class Solution {
public:
    bool hasAlternatingBits(int n) {
    string b = "";
    
    while(n>0)
    {
        b = to_string(n%2) + b;
        n/=2;
    }
    
    for(int i=1; i<b.length(); i++)
    {
        if(b[i-1]==b[i])
            return false;
    }
    return true;
    }
};
