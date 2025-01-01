#include <iostream>
using namespace std;

void func()
{
    cout<<"Inside Function."<<endl;
}
int main()
{
    cout<<"In: Main function.\n\tCALLING FUNCTION"<<endl;
    func();
    cout<<"\tRETURN\nBack to: Main Function."<<endl;
    return 0;
}