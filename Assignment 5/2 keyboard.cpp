vector<int>getPrimeFactors(int a){
        vector<int>Factors;
         for(int i=2;i<=a;i++){
          while(a%i==0){
            Factors.push_back(i);
            a=a/i;
              }
         }
          return Factors;
 }
class Solution {
public:
    int minSteps(int n) {
        vector<int>P = getPrimeFactors(n);
        int sum =0;
       for(int i=0;i<P.size();i++){
       sum = sum+ P[i];  
       } 
return sum;
        
    }

