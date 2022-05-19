int main(){
    vector<int>a;
    int n,e,sum=0,sum1=0;
    cin>>n;
    vector<int>k;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        for(int j=i+1;j<n;j++){
            
            sum1=sum1+a[j];
        }
        if(sum1==0){
            break;
        }
        else{
            cout<<sum<<" "<<sum1<<"\n";
            if(sum<sum1){
                k.push_back(sum);
            }
            else{
                k.push_back(sum1);
            }
            sum1=0;
        }
    }
    cout<<"Minimum_element"<<" "<<*min_element(k.begin(),k.end());
}
