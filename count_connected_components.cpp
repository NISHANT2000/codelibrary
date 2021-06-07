void bfs(vector<vector<int>>&adj,int s,bool visited[])
    {
        queue<int> q;
        visited[s]=true;
        q.push(s);
        while(!q.empty())
        {
            int u=q.front();
            cout<<u<<" ";
            q.pop();
            for(int v:adj[u])
            {
                if(visited[v]==false)
                {
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
    }
int bfscheck(vector<vector<int>> &adj,int s,int n)
{
  bool visited[n];
  for(int i=0;i<n;i++)
    visited[i]=false;
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(visited[i]==false)
    {
      count++;
      bfs(adj,s,visited);
    }
  }
  return count;
}
