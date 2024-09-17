#include <iostream>
using namespace std;

void condition()
{
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;

    if(marks>90)
    cout<<"S";
    else if(marks>80 && marks<=90)
    cout<<"A";
    else if(marks>70 && marks<=80)
    cout<<"B";
    else if(marks>60 && marks<=70)
    cout<<"C";
    else if(marks>50 && marks<=60)
    cout<<"D";
    else
    cout<<"F";
}
int main()
{
    condition();
    return 0;
}