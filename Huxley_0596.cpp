#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pares;

const int mx = 2e5;

// 596 - Ambrósio e as ilhas
// https://thehuxley.com/problem/596

int dijkstra(vector<vector<int>> edges, int V, int init){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    vector<int> dist(V+1, mx);
    dist[init] = 0;
    pq.push({dist[init], init});
    
    while (not pq.empty()){
        int v = pq.top().second; 
        pq.pop();

        for (auto u : edges[v]){
            if (dist[v] + 1 < dist[u]){
                dist[u] = dist[v] + 1;
                pq.push({dist[u], u});
            }
        }
    }
    return dist[V];
}
int main(){
    int s;
    cin >> s;

    while(s--){
        int V, E;
        cin >> V >> E;

        int a, b;
        vector<vector<int>> arestas(V+1);

        for (int i = 0; i < E; i++){
            cin >> a >> b;
            arestas[b].push_back(a);
            arestas[a].push_back(b);
        }
        int ans = dijkstra(arestas, V, 1);
        printf("%d\n", ans == mx ? -1 : ans);
    }

    return 0;
}
