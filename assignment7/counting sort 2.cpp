#include <bits/stdc++.h>

using namespace std;

vector<int>arr;
int main()
{
    int n;
    cin>>n;
    arr.resize(100,0);
    for(int i=0;i!=n;i++)
    {
        int m;
        cin>>m;
        arr[m]=arr[m]+1;
    }
    for(int r=0;r!= arr.size();r++){
        cout<<arr[r]<<" ";
    }
    return 0;
}
