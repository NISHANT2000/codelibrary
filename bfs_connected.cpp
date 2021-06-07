// Here, this below function will give the bfs traversal of a connected graph.
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
