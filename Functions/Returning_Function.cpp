#include <iostream>
using namespace std;

string func()
{
    return "Inside Function.";
}
int main()
{
    cout<<"In: Main function.\n\tCALLING FUNCTION"<<endl;
    cout<<func()<<endl;
    cout<<"\tRETURN\nBack to: Main Function."<<endl;
    return 0;
}