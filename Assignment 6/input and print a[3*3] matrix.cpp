#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter data in first 3X3 matrix\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter data in second 3X3 matrix\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
    }

}
