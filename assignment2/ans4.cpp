#include <bits/stdc++.h>
using namespace std;
int main(){
    int a [10000],n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cout<<a[n-i-1]<<" ";
    }
    return 0;
}
