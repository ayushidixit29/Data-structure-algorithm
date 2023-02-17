class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m=0;
        set<int>v;
        for(int i=0;i<s.length();++i)
        {
            int j=i;
            while(v.size()==j-i&&j<s.length())
            {
                v.insert(s[j]);
                j++;
            }
            int a=v.size();
            m=max(m,a);
            v.clear();
        }
        return m;
        
    }
};
