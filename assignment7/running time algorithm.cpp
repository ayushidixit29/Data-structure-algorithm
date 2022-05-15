#include <bits/stdc++.h>
using namespace std;

void runningtime(vector<int>a){
    int i,j,key,count=0;
    for(int i=1;i<a.size();i++){
        j=i-1;
        key=a[i];
        while(j>=0 && key<a[j]){
            swap(a[j+1],a[j]);
            j--;
            count++;
        }
        a[j+1]=key;
    }
    cout<<count;
}

int main(){
    int n,e;
    vector<int>a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    runningtime(a);
}
