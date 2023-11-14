#include <iostream>

using namespace std;

// Define the maximum size of the queue
#define MAX_SIZE 100

// Define the Queue class
class Queue {
  private:
    int arr[MAX_SIZE];
    int front, rear;

  public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is empty
    bool isEmpty() { return (front == -1 && rear == -1); }

    // Check if the queue is full
    bool isFull() { return (rear + 1) % MAX_SIZE == front ? true : false; }

    // Add an element to the queue
    void enqueue(int x) {
        cout << "Enqueuing " << x << endl;
        if (isFull()) {
            cout << "Error: Queue is full" << endl;
            return;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = x;
    }

    // Remove an element from the queue
    void dequeue() {
        cout << "Dequeuing" << endl;
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    // Get the front element of the queue
    int getFront() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Print the elements of the queue
    void print() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();

    q.dequeue();
    q.dequeue();
    q.print();

    cout << "Front element: " << q.getFront() << endl;

    return 0;
}
