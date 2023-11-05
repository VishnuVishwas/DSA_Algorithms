// reverse k elements

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void kReverese(queue<int> &q, int k) {
// queue -> stack -> queue
    stack<int> s;
    int count = 0;
    int n = q.size();

    if(k<=0 && k>n) 
        return;

// queue -> stack
    while(!q.empty()) {
        int temp = q.front();
        q.pop();

        s.push(temp);
        count++;

        if(count == k) 
            break;
    }

// stack -> queue
    while(!s.empty()) {
        int temp = s.top();
        s.pop();

        q.push(temp);
    }

// put the initial elements into queue ka end without changing
    count = 0;
    while(!q.empty() && n-k != 0) {
        int element = q.front();
        q.pop();

        q.push(element);
        count++;

        if(count == n-k)
            break;
    }
}

int main() {
    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    // reverseQueue(q);
    kReverese(q, 4);

    cout << "Printing the elements of iteration : ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

}