#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum;
}
