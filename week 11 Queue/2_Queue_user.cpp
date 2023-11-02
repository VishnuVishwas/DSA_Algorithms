// User defined Queue 

#include<iostream>
using namespace std;

class Queue{
public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }    

    void push(int data) {
        if(rear == size) {
            cout << "Queue is full " << endl;
        }
        else {
            arr[rear] = data;
            rear++;
        }
    }

    void pop() {
        if(front == rear) {
            cout << "Queue is full " << endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront() {
        if(front == rear) {
            cout << "Queue is empty " << endl;
            return -1;
        }
        else 
            return arr[front];
    }

    int getsize() {
        return rear-front;
    }

    bool isEmpty() {
        if(front == rear) 
            return true;
        else 
            return false;
    }


};

int main() {
    Queue q(5);

    q.push(13);
    q.push(23);
    q.push(33);
    q.push(43);

    cout << "The front element is : " << q.getFront() << endl;

    q.pop();
    cout << "The front element is : " << q.getFront() << endl;

    cout << "The size of the queue is : " << q.getsize() << endl;
    if(q.isEmpty())
        cout << "Queue is empty " << endl;
    else 
        cout << "Queue is not empty " << endl;


}