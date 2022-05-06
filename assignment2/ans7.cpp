 #include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
       return 0; 
    }
    else
    for (int i=2;i<=sqrt(n);i++){
      if (n%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main() {
    int p;
    cin>>p;
    if (isPrime(p)==0){
        cout<<"not prime";
        
    }
    else {
        cout<<"prime";
    }
}
