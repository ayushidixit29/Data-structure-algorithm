#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1;i<=n;i++){
        sum = sum+i;
        for (int j = 1;j<=sum;j++){
            char ch = '#';
            cout<<ch;
        }
        cout<<endl;
    }
}
