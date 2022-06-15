class Solution {
public:
    int guessNumber(int n) {
        
        int start=1;
        int end=n;
        while(start<=end){
          int m = start+(end-start)/2;
            if (guess(m) == 0)
                return m;
            else if(guess(m)==1)
                start=m+1;
            else
                end=m-1;
        }
        return 0;
    }
};
