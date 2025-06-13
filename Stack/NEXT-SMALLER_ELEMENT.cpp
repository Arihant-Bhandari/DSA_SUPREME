#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void nextSmaller(int arr[], int size, vector<int> &ans)
{
    stack<int> st;

    st.push(-1);

    for(int i = size - 1; i >= 0; i--)
    {
        while(arr[i] <= st.top())
        st.pop();

        ans[i] = st.top();
        
        st.push(arr[i]);
    }
}
int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    vector<int> ans(n);

    nextSmaller(arr, n, ans);

    for(auto i : ans) cout << i << " ";
    
    return 0;
}