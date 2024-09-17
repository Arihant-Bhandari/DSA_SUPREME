#include <iostream>
using namespace std;

void datatype()
{
    short x = 1;
    cout<<x<<"\t"<<sizeof(x)<<endl;
    int y = 2;
    cout<<y<<"\t"<<sizeof(y)<<endl;
    long z = 3;
    cout<<z<<"\t"<<sizeof(z)<<endl;
    long long l = 4;
    cout<<l<<"\t"<<sizeof(l)<<endl;

    float f = 1.0;
    cout<<f<<"\t"<<sizeof(f)<<endl;
    double d = 2.0;
    cout<<d<<"\t"<<sizeof(d)<<endl;

    bool b = true;
    cout<<b<<"\t"<<sizeof(b)<<endl;

    char c = 'A';
    cout<<c<<"\t"<<sizeof(c)<<endl;

    wchar_t w = 'A';
    cout<<w<<"\t"<<sizeof(w)<<endl;

    string s = "A";
    cout<<s<<"\t"<<sizeof(s)<<endl;
}
int main()
{
    datatype();
    return 0;
}