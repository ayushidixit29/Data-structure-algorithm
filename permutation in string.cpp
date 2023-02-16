class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         map<char, int> mp1, mp2;
        int m = s1.size() , n = s2.size(), j=0;
        for(int i=0 ;i<m ;i++)
            mp1[s1[i]]++;
        for(int i=0 ;i<m && i<n ;i++)
            mp2[s2[i]]++;
        if(mp1==mp2) 
            return true;
        for(int i = m ;i < n; i++ ,j++){
            if(mp2[s2[j]]==1)
            mp2.erase(s2[j]);
            else mp2[s2[j]]--;
            mp2[s2[i]]++;
            if(mp1 == mp2)
            return true;
        }
        return false;
        
    }
};
