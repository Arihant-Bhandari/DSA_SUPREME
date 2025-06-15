#include <iostream>
using namespace std;

class Deque
{
    private:
    int* arr;
    int size;
    int front;
    int rear;

    public:
    Deque(int size)
    {
        arr = new int[size];
        this -> size = size;
        front = -1;
        rear = -1;
    }
    void push_front(int val)
    {
        if(front == 0 && rear == size - 1 || rear == front - 1)
        {
            cout << "STACK FULL: OVERFLOW." << endl;
            return;
        }

        if(front == -1 && rear == -1)
        {
            ++front;
            arr[++rear] = val;
        }
        else if(front == 0 && rear != size -1)
        {
            front = size - 1;
            arr[front] = val;
        }
        else arr[--front] = val;
    }
    void push_back(int val)
    {
        if(rear == size - 1 && front == 0 || rear == front - 1)
        {
            cout << "STACK FULL: OVERFLOW." << endl;
            return;
        }
        
        if(front == -1 && rear == -1)
        {
            ++front;
            arr[++rear] = val;
        }
        else if(rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else arr[++rear] = val;
    }
    void pop_front()
    {
        if(front == -1 && rear == -1)
        {
            cout << "STACK EMPTY: UNDERFLOW." << endl;
            return; 
        }

        if(front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else arr[front++] = -1;
    }
    void pop_back()
    {
        if(front == -1 && rear == -1)
        {
            cout << "STACK EMPTY: UNDERFLOW." << endl;
            return;
        }

        if(front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0)
        {
            rear = size - 1;
            arr[rear] = -1;
        }
        else arr[rear--] = -1;
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

    Deque queue(n);

    queue.push_front(1);
    queue.print();

    queue.push_front(2);
    queue.print();
    
    queue.push_front(3);
    queue.print();
    
    queue.push_back(4);
    queue.print();
    
    queue.push_back(5);
    queue.print();

    queue.pop_front();
    queue.print();

    queue.pop_back();
    queue.print();

    queue.pop_front();
    queue.print();

    queue.push_front(6);
    queue.print();
    
    queue.push_back(7);
    queue.print();

    queue.push_front(8);
    queue.print();
    
    queue.push_back(9);
    queue.print();
    return 0;
}