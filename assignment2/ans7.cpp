#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
     if(n==1){
        return 0;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    return 1;
}
int main() {
    for(int i=1;i<30;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
}
