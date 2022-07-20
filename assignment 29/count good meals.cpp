class Solution {
public:
    int mod =1e9 +7;
    int countPairs(vector<int>& A,int target) {
        unordered_map<int,int>mp;
        long long ans=0;
        for(int a:A){
            if(mp.find(target-a)!=mp.end()){
                ans = (ans+mp[target-a])%mod;
            } 
            mp[a]++;         
        }
        return ans;
    }
    int countPairs(vector<int>&A){
        long long ans=0;
        int t=1;
       for(int i=1;i<=22;i++){
           ans =(ans + countPairs(A,t))%mod;
           t*=2;
       }
        return ans;
    }
};
