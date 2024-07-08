#include<iostream>
#include<string.h>
using namespace std;
class complex
{
    int real,image;
    public:
    complex()
    {

    }
    complex(int r,int i)
    {
        real=r;
        image=i;

    }
    void print()
    {
        cout<<real<<"+"<<image<<"i"<<endl;
    }
    friend complex Add(complex c1,complex c2);
};
complex Add(complex c1,complex c2)
    {
        complex c3;
        c3.real=c1.real+c2.real;
        c3.image=c1.image+c2.image;
        return c3;

    } 
int main()
{
    complex a(2,6),b(3,8),c;
    c=Add(a,b);
    a.print();
    b.print();
    cout<<"-----"<<endl;
    c.print();
}