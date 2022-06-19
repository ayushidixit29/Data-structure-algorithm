#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = n;i>=1;i=i/2){
        for (int j = 1;j<=i;j++){
            char a = '#';
            cout<<a;
        }
        cout<<endl;
    }
}
