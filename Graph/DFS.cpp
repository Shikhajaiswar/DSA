//first make an adjacency list 

// Start by putting any one of the graph's vertices on top of a stack.
// Take the top item of the stack and add it to the visited list.
// Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of the stack.
// Keep repeating steps 2 and 3 until the stack is empty.

void dfs (int node , unordered_map <int, bool > &visited , unordered_map <int , list<int> > &adj ,  vector <int> &component)  {
//      STORE ANS 
  component.push_back(node) ;   
  visited[node] = true ; 
//      MARK VISITED 
//      RECURSIVE CALL FOR EACH CONNECTED CALL
  for ( auto i : adj[node] ) 
  {
      if ( !visited[i] ) {
          dfs (i , visited , adj , component) ;
      }
  }   
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
//     PREPARE ADJACENT LIST 
  unordered_map<int , list<int> > adj ; 
  for ( int i = 0 ; i < edges.size() ; i++ ) {
      int u = edges[i][0] ;
      int v = edges[i][1] ;
      
      adj[u].push_back(v) ; 
      adj[v].push_back(u) ; 
  }
    
  
  vector<vector<int>> ans ;             //vector to store ans vector
  unordered_map <int, bool > visited ;  //to store the visited nodes
  
  for ( int i = 0 ; i < V ; i++ ){
      if (!visited[i] ) {
          vector<int>component ;    //vector to store the ans
          dfs (i , visited , adj , component) ;
          ans.push_back(component) ;  //pushing the component vector into ans vector
      }
  } 
  return ans ;
  
}

// The time complexity of the DFS algorithm is represented in the form of O(V + E), where V is the number of nodes and E is the number of edges.

// The space complexity of the algorithm is O(V).