#include <iostream>
using namespace std;

class Queue
{
    private:
    int* arr;
    int size;
    int front;
    int rear;

    public:
    Queue(int size)
    {
        arr = new int[size];
        this -> size = size;
        front = -1;
        rear = -1;
    }
    void push(int val)
    {
        if(rear == size - 1)
        {
            cout << "QUEUE FULL: OVERFLOW." << endl;
            return;
        }

        if(front == -1 && rear == -1)
        {
            ++front;
            arr[++rear] = val;
        }
        else
        arr[++rear] = val;
    }
    void pop()
    {
        if(front == -1 && rear == -1)
        {
            cout << "QUEUE EMPTY: UNDERFLOW." << endl;
            return;
        }

        if(front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else
        arr[front++] = -1;
    }
    bool isEmpty()
    {
        if(front == -1 && rear == -1) return true;
        else return false;
    }
    int getSize()
    {
        cout << "SIZE: ";
        return rear - front + 1;
    }
    int getFront()
    {
        if(front == -1)
        {
            cout << "NO ELEMENT in QUEUE: no FRONT ELEMENT.";
            return -1;
        }

        cout << "FRONT: ";
        return arr[front];
    }
    int getRear()
    {
        if(rear == -1)
        {
            cout << "NO ELEMENT IN QUEUE: no REAR ELEMENT.";
            return -1;
        }

        cout << "REAR: ";
        return arr[rear];
    }
    void print()
    {
        cout << "PRINTING QUEUE: ";
        for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl;
    }
};
int main()
{
    int n;
    cout <<"Enter Size: ";
    cin >> n;

    Queue queue(n);

    queue.push(1);
    queue.print();

    queue.push(2);
    queue.print();
    
    queue.push(3);
    queue.print();
    
    queue.push(4);
    queue.print();
    
    queue.push(5);
    queue.print();

    cout << queue.getSize() << endl;

    queue.pop();
    queue.print();

    queue.pop();
    queue.print();

    cout << queue.getFront() << endl;
    cout << queue.getRear() << endl;

    queue.pop();
    queue.print();

    cout << queue.getSize() << endl;

    return 0;
}