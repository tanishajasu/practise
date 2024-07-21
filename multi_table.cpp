#include<iostream>
using namespace std;
void mul(int  N,int i)

{
    if(i>10)
    return;
    cout<<N<<"*"<<i<<"="<<N*i<<endl;
    return mul(N,i+1);
}

int main()
{
    int N =2;
    mul(N,0);
    return 0;
}