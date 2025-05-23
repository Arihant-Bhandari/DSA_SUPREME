#include <iostream>
using namespace std;

// void solve(int arr[])
// {
//     // solve has only pointer to array

//     cout << "size of arr: " << sizeof(arr) << endl;
//     cout << "solve() arr: " << arr << endl;
//     cout << "solve() &arr: " << &arr << endl;
// }
// void solver(int* arr)
// {
//     *arr = *arr + 1;
// }
// void solve(int* ptr)
// {
//     ptr += 1;
// }
// void solver(int* &ptr)
// {
//     ptr += 1;
// }
int main()
{
    // int num = 5;
    // int* ptr = &num;

    // cout << "number: " << num << " address: " << ptr << endl;
    // cout << "derefering pointer: " << *ptr << " address of pointer: " << &ptr << endl;
    // cout << "size of pointer: " << sizeof(ptr) << endl;

    // int a = 5;
    // int* p1 = &a; // single pointer
    // int** p2 = &p1; // double pointer
    // int*** p3 = &p2; // triple pointer
    // int**** p4 = &p3; //quadruple pointer

    // int arr[5];
    // int* p1 = arr; // pointer to array
    // int (*p2)[5] = &arr; // pointer to array

    // int* ptr[5]; // array of pointers

    // for(int i = 0; i < 5; i++)
    // {
    //     int data;
    //     cout << "Enter VALUE: ";
    //     cin >> data;

    //     arr[i] = data;
    //     ptr[i] = &arr[i];
    // }

    // for(int i = 0; i < 5; i++)
    //     cout << "Value at index " << i << ": " << arr[i] << ptr[i] << endl;

    // int arr[5];

    // for(int i = 0; i < 5; i++)
    // arr[i] = i + 1;

    // cout << "size of arr: " << sizeof(arr) << endl;
    // cout << "main() arr: " << arr << endl;
    // cout << "main() &arr: " << &arr << endl;

    // solve(arr); // array gets passed by reference: main() has entire array

    // for(int i = 0; i < 5; i++)
    // cout << arr[i] << " ";

    // solver(arr); // array gets passed as pointer here: pointer changes get reflected due to pass by reference

    // for(int i = 0; i < 5; i++)
    // cout << arr[i] << " ";

    // int a = 5;
    // int* ptr = &a;

    // cout << "ptr: " << ptr << endl;
    // cout << "&ptr: " << &ptr << endl;
    // cout << "*ptr: " << *ptr << endl;

    // solve(ptr); // pass by value

    // cout << "ptr: " << ptr << endl;
    // cout << "&ptr: " << &ptr << endl;
    // cout << "*ptr: " << *ptr << endl;

    // solver(ptr); // pass by reference

    // cout << "ptr: " << ptr << endl;
    // cout << "&ptr: " << &ptr << endl;
    // cout << "*ptr: " << *ptr << endl;

    // char ch[50] = "statement";

    // char* ptr = ch;

    // cout << "ch: " << ch << endl;
    // cout << "&ch: " << &ch << endl;
    // cout << "*(ch + 3): " << *(ch + 3) << endl;
    // cout << "ptr: " << ptr << endl;
    // cout << "&ptr: " << &ptr << endl;
    // cout << "*(ptr + 3): " << *(ptr + 3) << endl;
    // cout << "ptr + 2: " << ptr + 2 << endl;
    // cout << "*ptr: " << *ptr << endl;
    // cout << "ptr + 8: " << ptr + 8 << endl;


    int arr[3] = {1, 2, 3};
    int* ptr = arr;
    int* p = &arr[0];
    // int* point = &arr; throws error since incompatible types: point expects single address of int while &arr unpacks address of array with 3 elements

    cout << "ptr: " << ptr << endl;
    cout << "p: " << p << endl;
    cout << "ptr + 2: " << ptr + 2 << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "*(ptr + 2): " << *(ptr + 2) << endl;
    cout << "*ptr + 2: " << *ptr + 2 << endl;

    for(int i = 0; i < 3; i++)
    cout << arr[i] << " ";

    return 0;
}