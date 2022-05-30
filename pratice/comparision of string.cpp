bool compare(string a,string b){
    int i=0; 
    int j=0;
    while(i<a.size() && a[i]=='0') i++;
    while(j<b.size() && b[j]=='0') j++;
    
    if ((a.size()-i)>(b.size()-j))    return 1;
    else if ((a.size()-i)<(b.size()-j))    return 0;
    else {
        while(i<a.size()){
            if(a[i]>b[j]) return 1;
            if(a[i]<b[j]) return 0;
            i++; j++;
        }
    }
    return 1;
}

int main(){
    string a,b;
    cin>>a>>b;
    if(compare(a,b)) cout<<a<<" is greater";
    else  cout<<b<<" is greater";
}
