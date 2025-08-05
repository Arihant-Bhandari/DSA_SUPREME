#include <iostream>
using namespace std;

class Heap
{
    public:
    int* arr;
    int capacity;
    int size;

    Heap(int capacity)
    {
        this -> arr = new int[capacity + 1];
        this -> capacity = capacity;
        this -> size = 0;
    }
    void insertion(int val)
    {
        if(size == capacity) 
        {
            cout << "ERROR: HEAP OVERFLOW." << endl;
            return;
        }

        int index = ++size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index / 2;

            if(arr[index] > arr[parent]) 
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else break;
        }
    }
    int deletion()
    {
        if(size == 0)
        {
            cout << "ERROR: HEAP UNDERFLOW." << endl;
            return -1;
        }

        int answer = arr[1];
        arr[1] = arr[size--];
        
        int index = 1;

        while(index < size)
        {
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            int largest = index;

            if(left <= size && arr[largest] < arr[left]) largest = left;
            
            if(left <= size && arr[largest] < arr[right]) largest = right;
            
            if(largest == index) break;
            else
            {
                swap(arr[largest], arr[index]);

                index = largest;
            }
        }

        return answer;
    }
    void print()
    {
        cout << "HEAP: ";
        for(int i = 1; i <= size; i++) cout << arr[i] << " ";
        cout << endl;
    }
    void heapify(int* arr, int size, int index)
    {
        int left = index * 2;
        int right = index * 2 + 1;

        int largest = index;

        if(left <= size && arr[largest] < arr[left])
        largest = left;

        if(right <= size && arr[largest] < arr[right])
        largest = right;

        if(largest != index)
        {
            swap(arr[largest], arr[index]);

            heapify(arr, size, largest);
        }
    }
    void buildHeap(int* arr, int size)
    {
        for(int i = size / 2; i > 0; i--)
        {
            heapify(arr, size, i);
        }
    }
};
int main()
{
    cout << "\t\tMAX HEAP\n";
    int n;
    cout << "Enter Size: ";
    cin >> n;

    Heap heap(n);

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE: ";
        cin >> data;

        heap.insertion(data);
    }

    heap.print();

    cout << "Deleted from Heap: " << heap.deletion() << endl;

    heap.print();



    return 0;
}