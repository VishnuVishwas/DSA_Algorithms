#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(11);
    q.push(21);
    q.push(31);
    q.push(41);

    cout << "Size of Queue is : " << q.size() << endl;
    cout << "Front element of queue : " << q.front() << endl;

    q.pop();
    cout << "After pop Q ka front : " << q.front() << endl;

    if( q.empty() )
        cout << "Queue is empty " << endl;
    else 
        cout << "Queue is not empty " << endl;
        
}