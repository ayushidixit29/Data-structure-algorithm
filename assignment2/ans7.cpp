#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,ctr=0;
    cin>>num1;
    for(int a=1;a<=num1;a++)
    {
        if(num1 % a==a){
            ctr++;
        }
    }
    if(ctr==2)
    {
        cout<<"The entered number is a prime number.\n";
         }
    else{
        cout<<"The number you entered is not a prime number. \n";
    }
    
}
