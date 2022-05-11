#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>matrix_multi(vector<vector<int>>a,vector<vector<int>>b){
    int mc1=a[0].size(),mr2=b.size(),mr1=a.size(),mc2=b[0].size();
    vector<int>M3(mc2);
    vector<vector<int>>m3(mr1,M3);
    for(int i=0;i<mr1;i++){
        for(int j=0;j<mc2;j++){
            for(int k=0;k<mc1;k++){
                m3[i][j]=m3[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    return m3;
}
int main(){
    int mr1,mc1,mr2,mc2;
    cin>>mr1>>mc1;
    cin>>mr2>>mc2;
    vector<int>M1(mc1);
    vector<int>M2(mc2);
    vector<vector<int>>m1(mr1,M1);
    for(int i=0;i<mr1;i++){
        for(int j=0;j<mc1;j++){
            cin>>m1[i][j];
        }
    }
    vector<vector<int>>m2(mr2,M2);
    for(int i=0;i<mr2;i++){
        for(int j=0;j<mc2;j++){
            cin>>m2[i][j];
        }
    }
    if(mc1==mr2){
    vector<vector<int>>m3=matrix_multi(m1,m2);
    for(int i=0;i<mr1;i++){
        for(int j=0;j<mc2;j++){
            cout<<m3[i][j]<<" ";
        }

        cout<<"\n";
    }
    }
    else cout<<"matrix multiplication not possible";
}
