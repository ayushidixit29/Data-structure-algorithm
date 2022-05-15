#include <bits/stdc++.h>

using namespace std;

vector<int>arr(100,0);
int main()
{
    int n;
    cin>>n;
    
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
