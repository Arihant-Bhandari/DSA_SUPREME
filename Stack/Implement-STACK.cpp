#include <iostream>
using namespace std;

class Stack
{
    private:
    int* arr;
    int size;
    int top;

    public:
    Stack(int size)
    {
        arr = new int[size];
        this -> size = size;
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(int data)
    {
        if (top == size - 1) cout << "STACK OVERFLOW." << endl;
        else arr[++top] = data;
    }
    void pop()
    {
        if(top == -1) cout << "STACK UNDERFLOW." << endl;
        else arr[top--] = -1;
    }
    bool isEmpty()
    {
        if(top == -1) return true;
        else return false;
    }
    int getTop()
    {
        if(top == -1) 
        {
            cout << "STACK EMPTY." << endl;
            return -1;
        }

        cout << "TOP: ";
        return arr[top];
    }
    int getSize()
    {
        cout << "SIZE: ";
        return top + 1;
    }
    void print()
    {
        cout << "PRINTING STACK: ";
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

    Stack stack(n);

    stack.push(1);
    stack.print();

    stack.push(2);
    stack.print();
    
    stack.push(3);
    stack.print();
    
    stack.push(4);
    stack.print();
    
    stack.push(5);
    stack.print();

    cout << stack.getSize() << endl;

    stack.pop();
    stack.print();

    stack.pop();
    stack.print();

    cout << stack.getTop() << endl;

    stack.pop();
    stack.print();

    cout << stack.getSize() << endl;
    
    return 0;
}