#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cout << "Enter numbers for DIVIDEND and DIVISOR (DIVIDEND/DIVISOR): ";
    cin >> n >> d;

    int start = 0, end = abs(n);
    int ans = 0;

    do
    {
        int mid = start + (end - start) / 2;

        if(abs(d) * mid == abs(n))
        {
            ans = mid;
            break;
        }
        else if(abs(d) * mid < abs(n))
        {
            start = mid + 1;
            ans = mid;
        }
        else
        end = mid - 1;
    } while (start <= end);

    if((d < 0 && n > 0) || (d > 0 && n < 0))
    cout << "QUOTIENT: " << (-1 * ans);
    else
    cout << "QUOTIENT: " << ans;
    
    return 0;
}