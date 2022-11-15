#include<bits/stdc++.h>
void preparelist(unordered_map<int,set<int>>&adjlist,vector<pair<int, int>> &edges){
       for(int i=0;i<edges.size();i++){
       int u=edges[i].first;
       int v=edges[i].second;
           
       adjlist[u].insert(v);     //since graph is non-directed so both pointing to each other
       adjlist[v].insert(u); 
   }
}

void bfs(unordered_map<int, set<int>>&adjlist, unordered_map<int, bool>&vis, vector<int>&ans, int node)
{
       queue<int>q;
       q.push(node);
       vis[node]=1;
       while(!q.empty()){
           int front=q.front();
           q.pop();
           ans.push_back(front);//store front node in ans
           for(auto i:adjlist[front]){//traverse all neighbour of front node
               if(!vis[i]){
                   q.push(i);
                   vis[i]=1
               }
           }
       }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
   // Write your code here
   unordered_map<int,set<int>>adjlist; //making the adjacency list
   vector<int>ans;              //list to store ans 
   unordered_map<int,bool>visited;  //making the map to check visited
   preparelist(adjlist,edges);
   
   //traverse all component of graph
   for(int i=0; i<vertex; i++){
       if(!visited[i])
           bfs(adjlist,visited,ans,i);
   }

   return ans;
}




// The time complexity of the BFS algorithm is represented in the form of O(V + E), where V is the number of nodes and E is the number of edges.

// The space complexity of the algorithm is O(V).