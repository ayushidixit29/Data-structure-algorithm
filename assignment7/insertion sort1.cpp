#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector <int>ar){
    int a=0;
    for(int i=0;i<ar.size()-1;i++){
        if(ar[i]>ar[i+1]){
            a=ar[i+1];
            int j=i;
            while(ar[j]>a){
                ar[j+1]=ar[j];
                j--;
                for(int k=0;k<ar.size();k++)cout<<ar[k]<<" ";
                cout<<endl;
                
            }
            ar[j+1]=a;
        }
    }
    for(int i=0;i<ar.size();i++)cout<<ar[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int>ar;
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        ar.push_back(y);
    }
    insertionSort(ar);
    return 0;
}
