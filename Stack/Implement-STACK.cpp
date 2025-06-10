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
        else top--;
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
        else return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
};
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    Stack st(n);
    
    return 0;
}