#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    cout<<"enter elements of array:";
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"3*3 matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
    
}
