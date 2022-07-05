#include <iostream>
using namespace std;
 
class Queue{
	int A[100000];
	int start;
	int end;
 
	public:
	Queue(){
		start=0;
		end=0;
		cout<<"constructor is Called\n";
	}

	void push(int val){
		A[end]=val;
		end++;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
 
	int front(){
		if(start<end){
			return A[start];
		}
		cout<<"returning the value at front\n";
		return 0;
	}
 
	void pop(){
		if(start!=end){
			start++;
		}
		cout<<"removing the first element\n";
	}
 
	int size(){
		return end-start;
		cout<<"return the size of the queue\n";
		return 0;
	}
 
	bool isEmpty(){
		if(start==end){
			return true;
		}
		cout<<"returning if the queue is empty\n";
		return false;
	}
};
 
int main() {
	Queue q; 
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	cout<<"front error: "<<q.front()<<"\n";
	return 0;
}
