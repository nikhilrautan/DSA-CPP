#include <iostream>
#include <queue>
using namespace std;

// Queue using array (linear - can't reuse freed space)
class Queue
{
    int *arr;
    int front, rear, size;

public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;  // -1 means empty
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "Pushed " << x << " into the Queue \n";
            return;
        }
        else if (isFull())
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            arr[++rear] = x;  // increment rear, then insert
            cout << "Pushed " << x << " into the Queue \n";
            return;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)  // last element
            {
                cout << "Popped " << arr[front] << " from the Queue \n";
                front = rear = -1;  // reset to empty state
            }
            else
            {
                cout << "Popped " << arr[front] << " from the Queue \n";
                front++;
            }
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
            return arr[front];
    }
};

// Circular Queue - reuses freed space using modulo
class CircularQueue
{
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    // full when next position of rear == front
    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "Pushed " << x << " into the Queue \n";
            return;
        }
        else if (isFull())
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            rear = (rear + 1) % size;  // wrap around using modulo
            arr[rear] = x;
            cout << "Pushed " << x << " into the Queue \n";
            return;
        }
    }

    
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "Popped " << arr[front] << " from the Queue \n";
                front = rear = -1;
            }
            else
            {
                cout << "Popped " << arr[front] << " from the Queue \n";
                front = (front + 1) % size;  // wrap around
            }
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
            return arr[front];
    }
};


// Node for linked list
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Queue using Linked List - dynamic size, no overflow
class QueueByLL
{
    Node *front, *rear;

public:
    QueueByLL()
    {
        front = rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = new Node(x);
            rear = front;
            cout << "Pushed " << x << " into the Queue \n";
            return;
        }
        else
        {
            rear->next = new Node(x);  // add at rear
            rear = rear->next;
            cout << "Pushed " << x << " into the Queue \n";
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            Node *temp = front;
            front = front->next;  // move front forward
            cout << "Popped " << temp->data << " from the Queue \n";
            delete temp;  // free memory
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{
    // STL queue demo
    queue<int> q;
    q.push(10);
    q.push(100);
    q.push(1000);

    q.pop();  // removes 10 (FIFO)

    cout << q.front() << endl;  // 100
    cout << q.size() << endl;   // 2
}