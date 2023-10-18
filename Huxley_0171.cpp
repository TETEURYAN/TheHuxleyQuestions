#include <bits/stdc++.h>
using namespace std;

//171 - Reduzindo Mapas
//https://thehuxley.com/problem/171

int prim(vector<pair<int, int>> adj[], int N, int init) 
{
    vector<pair<int, int>> result; 
    
    int sum = 0;
    int parent[N + 1];  
    int cost[N + 1]; 
    bool visited[N + 1];

    for(int i = 1; i <= N; i++){
        visited[i] = false;
        cost[i] = INT_MAX;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> queue;//Fila de prioridade

    cost[1] = 0;
    parent[1] = -1;
    queue.push({0, 1});

    while (not queue.empty())
    {
        int u = queue.top().second;
        queue.pop();

        visited[u] = true;

        for (auto sample : adj[u])
        {
            int v = sample.first;
            int force = sample.second;
            if (visited[v] == false && force < cost[v])
            {
                parent[v] = u;
                cost[v] = force;
                queue.push({cost[v], v});
            }
        }
    }

   
    for (int i = 2; i <= N; i++)
        sum += cost[i];
    return sum;
}

int main()
{
    int N, m;
    cin >> N >> m;
    vector<pair<int, int>> adj[N + 1];
    
    int a, b, wt;
    for (int i = 0; i < m; i++){
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(b, wt));
        adj[b].push_back(make_pair(a, wt));
    }
    
    int result = prim(adj, N, 0);
    cout << result << endl;
    
    return 0;
}
