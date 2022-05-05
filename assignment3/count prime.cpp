#include<bits/stdc++.h>
using namespace std; 
bool isprime(int n){
	if (n==2 || n==3){
		return 1;
	}
	else{
		for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
		else{
			return 1;
		}
	}
	}
}
int main(){
	int s,c=0,l;
	cin>>s;
	if(s<=2){
		//for value less than or equal to two is zero
	}
	for(int i=2;i<=s;i++){
		l=isprime(i);
		if(l==1){
			c++;
		}
	}
	cout<<c;
}
