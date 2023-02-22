class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string temp="";
        int idx=0;
        fun(s,idx,temp,ans);
        return ans;
    }
    void fun(string s,int idx,string temp,vector<string>&ans)
    {
        if(idx>=s.length())
        {
            ans.push_back(temp);
            return;
        }
        fun(s,idx+1,temp+s[idx],ans);
        if(s[idx]>='a' and s[idx]<='z')
        {
            char ch=toupper(s[idx]);
            fun(s,idx+1,temp+ch,ans);
        }
        else if(s[idx]>='A' and s[idx]<='Z')
        {
            char ch=tolower(s[idx]);
            fun(s,idx+1,temp+ch,ans);
        }
    }
};
