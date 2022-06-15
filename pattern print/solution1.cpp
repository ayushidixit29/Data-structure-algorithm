#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j,rows;
	cout<<"enter the value:";
	cin>>rows;
	cout<<endl;
	for(i=rows;i>=1;i--){
		for(j=1;j<=i;j++)
		cout<<j;
		cout<<endl;
	}
//	cout<<"\n";
	
	return 0;
}
