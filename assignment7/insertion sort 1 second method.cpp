#include<bits/stdc++.h>
using namespace std;

void insertion1(vector<int>a){
    int i=0,j,key;
    for(int i=1;i<a.size();i++){
        j=i-1;
        key=a[i];
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        a[j+1]=key;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n,e;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    insertion1(a);
}
