// cycle detection in directed graph using bfs 

// logic :- topological sort is only valid in acyclic directed graph so if a graph follow topological sort then it must be acyclic

// --->so just count the no of prints in topological char 
// ------>if(count == no of vertex) then acyclic



#include<bits/stdc++.h>

// Using Kahn's algorithm

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
     
    // Create adj List
    unordered_map<int, list<int>> adj;
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;
        
        adj[u].push_back(v);
    }
    
    // find all the indegress
    vector<int> indegree(n);
    
    for(auto i : adj)
    {
        for(auto j : i.second){
            indegree[j]++;
        }
    }
    
    // 0 indegreee walo ko stack mai push karo
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }
    
    // do bfs
    int cnt = 0;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
    
    
    // inc count
    cnt++;
     
    // neighbour indegree update
        for(auto x: adj[front])
        {
            indegree[x]--;
            if(indegree[x] == 0) q.push(x); 
        }
    }
 
    
    if(cnt == n) return false;
    else return true;
}