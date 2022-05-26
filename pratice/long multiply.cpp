#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
    string num = "0123456789";
	string sum = "";
    int i = a.size() -1;
    int j = b.size() -1;     
    int y =0;
    while(i>=0 && j>=0){
        int s = (a[i] - '0') + (b[j] - '0') + y;
        int z = s%10;
        y = s/10;
        sum = sum + num[z]; 
       i--;
       j--;
    }
    while(i>=0 ){
        int s = (a[i]-'0')+y;
        int z = s%10;
        sum = sum+num[z];
        y = s/10;
          i--;
       } 
    while( j>=0){
        int s = (b[j]-'0')+y;
        int z = s%10;
        sum = sum+num[z];
        y = s/10;
          j--;
       } 
    if(y>0){
        sum= sum + num[y];
    }
    reverse(sum.begin(),sum.end());
  //  cout<<sum<<" ";                          
    return sum;
}

string product(string a, int b){
    int n = a.size();
    string num = "0123456789";
    string pro = "";
    int carry = 0;
    for (int i = n-1;i>=0;i-- ){
        int s = (a[i] - '0')*b + carry;
        int z = s%10;
        carry = s/10;
        pro = pro + num[z];
    }
     if(carry>0){
         pro= pro + to_string(carry);
     }
     reverse(pro.begin(),pro.end());
   //  cout<<pro<<" ";
     return pro;
}

string multiply(string a, string b){
    int n = b.size();
    string multi = "";
    string sum = "";
    for (int i = n-1;i>=0; i-- ){
        int z = (b[i]-'0') ;
       sum = product(a,z); 
       for(int j=i+1;j<n;j++) sum+="0";
       multi = add(multi,sum);   
    }
    cout<<multi<<" ";
    return multi;
}

int main(){
    string a, b;
    cin>>a>>b;
    multiply(a,b);
}
