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
    void heapSort(int* arr, int size)
    {
        while(size != 1)
        {
            swap(arr[1], arr[size--]);
            heapify(arr, size, 1);
        }
    }
};
int main()
{
    int n;
    cout << "Enter HEAP Size: ";
    cin >> n;

    Heap heap(n);

    for(int i = 1; i <= n; i++)
    {
        int data;
        cout << "Enter VALUE for HEAP: ";
        cin >> data;
        
        heap.arr[i] = data;
        heap.size += 1;
    }

    heap.buildHeap(heap.arr, heap.size);

    heap.heapSort(heap.arr, heap.size);

    heap.print();

    return 0;
}