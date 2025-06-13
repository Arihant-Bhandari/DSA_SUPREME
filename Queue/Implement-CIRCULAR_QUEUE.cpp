#include <iostream>
using namespace std;

class CQueue
{
    private:
    int* arr;
    int size;
    int front;
    int rear;

    public:
    CQueue(int size)
    {
        arr = new int[size];
        this -> size = size;
        front = -1;
        rear = -1;
    }
    void push(int val)
    {
        if(front == 0 && rear == size -1 || rear == front -1)
        {
            cout << "QUEUE FULL: OVERFLOW." << endl;
            return;
        }

        if(front == -1 && rear == -1)
        {
            ++front;
            arr[++rear] = val;
        }
        else if(rear == size -1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else arr[++rear] = val;
    }
    void pop()
    {
        if(front == -1 && rear == -1)
        {
            cout << "QUEUE EMPTY: UNDERFLOW." << endl;
            return;
        }

        if(front == rear) 
        arr[front++] = -1;
        else if(front == size -1)
        {
            arr[front] = -1;
            front = 0;
        }
        else arr[front++] = -1;
    }
    bool isEmpty()
    {
        return front == -1;
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
            cout << "QUEUE EMPTY.";
            return -1;
        }

        cout << "FRONT: ";
        return arr[front];
    }
    int getRear()
    {
        if(rear == -1)
        {
            cout << "QUEUE EMPTY.";
            return -1;
        }

        cout << "REAR: ";
        return arr[rear];
    }
    void print()
    {
        cout << "FRONT: " << front << " REAR: " << rear << endl;
        cout << "PRINTING QUEUE: ";
        for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl << endl;
    }
};
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    CQueue queue(n);

    queue.push(1);
    queue.print();

    queue.push(2);
    queue.print();
    
    queue.push(3);
    queue.print();

    cout << queue.getRear() << endl;
    
    queue.push(4);
    queue.print();
    
    queue.push(5);
    queue.print();

    cout << queue.getSize() << endl;

    queue.pop();
    queue.print();

    queue.pop();
    queue.print();

    queue.pop();
    queue.print();

    cout << queue.getFront() << endl;

    queue.push(6);
    queue.print();
    
    queue.push(7);
    queue.print();

    queue.push(8);
    queue.print();
    
    queue.push(9);
    queue.print();
    return 0;
}