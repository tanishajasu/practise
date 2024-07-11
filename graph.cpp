#include<iostream>
using namespace std;
class Graph
{
    int verArr[20][20];
    int v;
    public:
    Graph(int c)
    {
        v=c;
        for(int i=0;i<20;i++)
        {
            for(int j=0;j<20;j++)
            {
                verArr[i][j]=0;
            }
        }
    }
    void displayMatrix()
    {
        int i,j;
        cout<<" \t";
        for(i=0;i<v;i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
        cout<<" ";
        for(i=0;i<v;i++)
        {
            cout<<"--------";
        }
        cout<<endl;
        for(i=0;i<v;i++)
        {
            cout<<i<<"| \t";
            for(j=0;j<v;j++)
            {
                cout<<verArr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void add_edge(int a,int b)
    {
        verArr[a][b]=1;
        verArr[b][a]=1;
    }
};

int main()
{
    Graph g(6);
    g.add_edge(0,4);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(1,4);
    g.add_edge(1,5);
    g.add_edge(2,3);
    g.add_edge(2,5);
    g.add_edge(5,3);
    g.add_edge(5,4);
    g.displayMatrix();
}