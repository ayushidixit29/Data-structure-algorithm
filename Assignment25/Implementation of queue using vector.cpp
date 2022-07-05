#include <bits/stdc++.h>
using namespace std;
class Queue{
    int A[1000];
    int start;
    int end;
    public:
    Queue(){
        start=0;
        end=0;
    }
    void push(int value)
    {
        A[end]=value;
            end++;
    }
    int first(){
        if(start==end);
        return A[start];
    }
    void pop_first(){
        if(start!=end){
            start++;
        }
        cout<<"a is empty";
    }
    bool isEmpty(){
        return start==end;
    }
    
    
    
};
int main(){
	Queue q;
    q.push(10);
    q.push(5);
    q.first();
    q.pop_first();
}
