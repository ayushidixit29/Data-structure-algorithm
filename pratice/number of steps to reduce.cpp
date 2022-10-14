class Solution {
public:

int solve(int n, int ans){
    if(n==0){
        return ans;
    }
    ans++;
    if(n%2==0){
        n=n/2;
    }
    else{
        n-=1;
    }
    return solve(n, ans);
}

int numberOfSteps(int num) {
    return solve(num,0);
}
};

