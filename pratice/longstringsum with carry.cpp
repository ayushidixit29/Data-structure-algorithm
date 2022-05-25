int main() {
    string k="0123456789";
    string a="123";
    string b="9811";
    string sum="";
    int i=a.size()-1;
    int j=b.size()-1;
    int sum1,carry=0,c;
    while(i>=0 && j>=0){
        c=(a[i]-'0')+(b[j]-'0')+carry;
        sum1=c;
        if(c>9){
            c=sum1%10;
            carry=sum1/10;
        }
         
        sum=sum+k[c];
        i--;
        j--;
    }

    while(i>j){
        c=a[i]-'0'+carry;
        sum1=c;
        if(c>9){
            c=sum1%10;
            carry=sum1/10;
        }
        sum=sum+k[c];
        i--;
    }
    while(j>i){
        c=b[j]-'0'+carry;
        sum1=c;
        if(c>9){
            c=sum1%10;
            carry=sum1/10;
        }
        sum=sum+k[c];
        j--;
    }
    if(carry>0){
        sum=sum+k[carry];
    }

   
    reverse(sum.begin(),sum.end());
    cout<<sum;
    
}
