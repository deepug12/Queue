#include<iostream>
using namespace std;

class queue{

	int* arr;
	int qfront;
	int rear;
	int size;
public:
	queue(){
		size = 1e7+9;
		arr = new int[size];
		qfront = 0;
		rear = 0;

	}
	void enqueue(int data){
		if(rear == size){
			cout<<"Queue is full\n";
		}
		else{
			arr[rear] = data;
			rear++;
		}
	}
	int dequeue(){
		if(qfront == rear){
			return -1;
		}
		else{
			int ans = arr[qfront];
			arr[qfront] = -1;
			qfront++;
			if(qfront == rear){
				qfront = 0;
				rear = 0;
			}
			return ans;
		}
	}
	int front(){
		if(qfront == rear){
			return -1;
		}
		else{
			return arr[qfront];
		}

	}
	bool isEmpty(){
		if(qfront == rear){
			return true;
		}
		else{
			return false;
		}
	}

};
int main()
{
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	cout<<q.dequeue()<<'\n';
	cout<<q.front()<<'\n';
	cout<<q.isEmpty()<<'\n';
	return 0;
}