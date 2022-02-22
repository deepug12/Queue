// First negative integer in every window of size k

#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    for(int i = 0; i< k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    // step 2 fectch from stack and push into queue
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

int main(){
	return 0;
}