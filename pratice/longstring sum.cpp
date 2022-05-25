#include <bits/stdc++.h>
    using namespace std;
    string add(string a, string b){
        string n= "0123456789";
    	string sum = "";
        int i = a.size() -1;
        int j = b.size() -1;
 
        while(i>=0 && j>=0){
            int s = (a[i] - '0') + (b[j] - '0');
            i--;
            j--;
            sum = sum + n[s];
            } 
        return sum;
 
    }
 
    int main(){
        string a, b;
        cin>>a>>b;
        cout<<add(a,b);
    }
