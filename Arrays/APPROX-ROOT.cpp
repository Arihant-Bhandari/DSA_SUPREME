#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. to find ROOT: ";
    cin >> n;

    int start = 0, end = n;
    int ans = 0;

    do
    {
        int mid = start + (end - start) / 2;

        if(mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if(mid * mid < n)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        end = mid - 1;
    } while (start <= end);

    cout << "ROOT: " << ans;
    
    return 0;
}