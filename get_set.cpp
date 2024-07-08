//GET SET USED IN PUBLIC CLASS
#include <iostream>
using namespace std;
    class Number
    {
        int a;
        public:
            void seta(int x)
            {
                a=x;
            }
           int geta()  //returns a value whenever it gets called
           {
               return a;
           }
    };
int main()
{
    Number n;
    n.seta(10);
    cout<<"a="<<n.geta()<<endl;

    return 0;
}