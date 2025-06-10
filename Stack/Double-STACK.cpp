#include <iostream>
using namespace std;

class Stack
{
    private:
    int *arr;
    int size;
    int top1;
    int top2;

    public:
    Stack(int size)
    {
        arr = new int[size];
        this -> size = size;
        top1 = -1;
        top2 = size;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push_1(int data)
    {
        if(top2 - top1 == 1)
        {
            cout << "OVERFLOW: CANNOT PUSH." << endl;
            return;
        }

        arr[++top1] = data;
    }
    void push_2(int data)
    {
        if(top2 - top1 == 1)
        {
            cout << "OVERFLOW: CANNOT PUSH." << endl;
            return;
        }

        arr[--top2] = data;
    }
    void pop_1()
    {
        if(top1 == -1)
        {
            cout << "UNDERFLOW: STACK EMPTY." << endl;
            return;
        }

        arr[top1--] = INT_MIN;
    }
    void pop_2()
    {
        if(top2 == size)
        {
            cout << "UNDERFLOW: STACK EMPTY." << endl;
            return;
        }

        arr[top2++] = INT_MIN;
    }
    void print()
    {
        for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl;
    }
};
int main()
{
    Stack st(5);

    st.push_1(10);
    st.push_1(20);
    st.push_2(100);
    st.push_2(200);
    cout << "STACK: ";
    st.print();

    st.push_1(3);
    cout << "STACK: ";
    st.print();

    st.pop_1();
    st.print();
    st.pop_2();
    cout << "STACK: ";
    st.print();

    st.pop_1();
    st.pop_1();
    cout << "STACK: ";
    st.print();

    st.pop_2();
    st.pop_2();
    cout << "STACK: ";
    st.print();

    st.push_1(10);
    st.push_2(20);
    cout << "STACK: ";
    st.print();

    return 0;
}