#include <iostream>
using namespace std;
 
class Queue{
	struct Node{
		int data;
		Node* next;
 
	};
 
	Node *start,*end;
	int n;
 
 
	public:
   Queue(){
		cout<<"constructor is Called\n";
		start=NULL;
		end=NULL;
		n=0;
	}
   void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Node *new_node = new Node;
		new_node->data=val;
		if(start==NULL){
			start = new_node;
			end= start;
		}
		else{
			end->next = new_node;
			end = new_node;
 
		}
		n++;
	}
 
	int front(){
		cout<<"returning the value at front\n";
		if(start!=NULL) return start->data;
		return -1;
	}
 
	void pop(){
		cout<<"removing the first element\n";
		if(start){
			n--;
			cout<<start->data;
			start=start->next;
		}
	}
 
	int size(){
		cout<<"return the size of the queue\n";
		return n;
	}
 
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		if(start==NULL) return true;
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
	return 0;
}
