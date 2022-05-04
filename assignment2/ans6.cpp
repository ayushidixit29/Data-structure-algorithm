#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1=6,num2=9,larg;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    if(num1>num2)
        larg=num1;
    else
        larg=num2;
    cout<<"\nLargest ="<<larg;
    cout<<endl;
    return 0;
}
