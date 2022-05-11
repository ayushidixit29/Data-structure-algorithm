#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>prime;
int primefact=0;
void sieve(){
    int max=2e5+5;
    vector<bool>isprime(max,1);
    isprime[1]=0;
    for(int i=2;i<max;i++){
        if(!isprime[i]) continue;
        prime.push_back(i);
        for(int j=i*i;j<max;j=j+i) isprime[j]=0;
    }
}

signed main(){
    int n;
    cin>>n;
    sieve();
    for(int i=0;i<n;i++){
        if(n%prime[i]==0){
           primefact=primefact+prime[i]; 
        }
    }
    cout<<primefact;
}
