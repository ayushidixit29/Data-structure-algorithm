int Solution::solve(vector<int> &A, int b) {
    int n =A.size();
    int currSum =0;
    for(int i=0;i<b;i++){
        currSum +=A[i];
    }
    int maxSum =currSum;
    int inc = n - 1, exc = b - 1;
    while(inc>=0 and exc>=0){
        currSum += A[inc--];
        currSum -= A[exc--];
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}
