#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> mp;

    void addEdge(int v, int u, int direction)
    {
        // direction = 0 then undirected graph
        // direction = 1 then directed graph

        // create an edge from u to v
        mp[u].push_back(v);

        if (direction == 0)
        {
            mp[v].push_back(u);
        }
    }

    void printList()
    {
        for (auto i : mp)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes";
    cin >> n;

    int m;
    cout << "Enter the number of edges";
    cin >> m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.printList();
    return 0;
}

// 0 1
// 1 2
// 2 3 
// 3 1
// 3 4
// 0 4