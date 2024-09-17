#include <iostream>
using namespace std;

void artihematic()
{
    int a, b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<"a+b: "<<a+b<<endl;
    cout<<"a-b: "<<a-b<<endl;
    cout<<"a*b: "<<a*b<<endl;
    cout<<"a/b: "<<a/b<<endl;
    cout<<"a%b: "<<a%b<<endl;
}
void relational()
{
    int a, b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    cout<<"a!=b: "<<(a!=b)<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a>=b: "<<(a>=b)<<endl;
    cout<<"a<=b: "<<(a<=b)<<endl;
}
void logical()
{
    int a, b, x;
    cout<<"Enter Range (X to Y) and a Number: ";
    cin>>a>>b>>x;
    if(a<x && x<b)
    cout<<"in range: "<<a<<" to "<<b<<endl;
    else if(x<a || x>b)
    cout<<"out range: "<<a<<" to "<<b<<endl;
    else
    cout<<"On points: "<<a<<" or "<<b<<endl;
}
void bitwise()
{
    int a, b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"a<<b: "<<(a<<b)<<endl;
    cout<<"a>>b: "<<(a>>b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    cout<<"a+~b: "<<(a+~b);
}
int main()
{
    cout<<"Arithematic Operations: ";
    artihematic();
    cout<<endl;
    cout<<"Relational Operations: ";
    relational();
    cout<<endl;
    cout<<"Logical Operations: ";
    logical();
    cout<<endl;
    cout<<"Bitwise Operations: ";
    bitwise();
    return 0;
}