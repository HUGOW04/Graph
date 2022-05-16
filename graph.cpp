#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void displayAdjList(list<int> adj[], int v)
{
    for(int i = 0; i < v; i++)
    {
        cout<<i<<" --->";
        list<int>::iterator it;
        for(it = adj[i].begin(); it != adj[i].end(); ++it)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}

void add(list<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 6;
    list<int> adj[v];
    add(adj,0,4);
    add(adj,0,3);
    add(adj,1,2);
    add(adj,1,4);
    add(adj,1,5);
    add(adj,2,3);
    add(adj,2,5);
    add(adj,5,3);
    add(adj,5,4);
    displayAdjList(adj,v);
}
