#include<iostream>
#include<string.h>
using namespace std;
class demo
{
    int x;
    public:
        demo()
        {
            cout<<"Constructor called"<<endl;

        }
        demo(int n):x(n)
        {}
        void print()
        {
            cout<<"x="<<x<<endl;
        }
        ~demo()
        {
            cout<<"Destructor called..fussssssssss"<<endl;
        }
        
};
int main()
{
    demo d1;
    cout<<"----------1------------"<<endl;
    demo d2(100);
    d2.print();
    cout<<"----------2------------"<<endl;
    demo d3;
    cout<<"----------3------------"<<endl;
    demo d4;
    cout<<"----------4------------"<<endl;
}