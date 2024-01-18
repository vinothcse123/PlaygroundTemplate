#include <iostream>
#include <memory>
#include <vector>
#include <list>


class Graph
{
    public:
    int data=0;
    std::vector<std::list<int>> adj;

    Graph(int size)
    {
        adj.resize(size);
    }

    void addEdge(int left,int right)
    {
        adj[left].push_back(right);
    }
};


int main()
{
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,5);
}
