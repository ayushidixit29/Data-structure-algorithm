#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>ar){
    int n=ar.size();
    for(int i=1;i<n;i++){
        int m=ar[i];
        for(int j=i-1;j>=0;j--){
            if(ar[j]>m){
                ar[j+1]=ar[j];
                if(j==0)
                ar[j]=m;
            }
            else{
                ar[j+1]=m;
                j=-1;
            }
        }
        for(int t=0;t<n;t++)
        cout<<ar[t]<<" ";
        cout<<endl;
    }
}
int main(){
    vector<int>ar;
    int x;
    cin>>x;
    for(int ari=0;ari<x;ari++){
        int y;
        cin>>y;
        ar.push_back(y);
    }
    insertionsort(ar);
    return 0;
}

