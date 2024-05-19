#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, cost;
};

const int mx = 1e5;

bool bellman(vector<Edge> adj, int V, int src){
    vector<int> dist(V);

    bool trip = true;
    
    fill_n(dist.begin(), V, (INT_MAX)/2);

    dist[src] = 0;

    for (int i = 0; i <= (V-1); i++){
        for (auto edge : adj){
            if (((dist[edge.u] + edge.cost) < dist[edge.v]) and dist[edge.u] != (INT_MAX)/2){
                dist[edge.v] = dist[edge.u] + edge.cost;
            }
        }
    }

    for (auto edge : adj)
        if ((dist[edge.u] + edge.cost < dist[edge.v]) and dist[edge.u] != (INT_MAX)/2){
            trip = false;
            break;
        }

    return trip;
}

void solve(int n){
    while(n--){
        int V,E;
        cin >> V >> E;
        vector<Edge> adj;
        for(int i = 0; i < E; i++){
            int a,b,cost;
            cin >> a >> b >> cost;
            adj.push_back({a,b,cost});
        }
        printf("%s\n", !bellman(adj, V, 0) ? "possible" : "not possible");
    }

}

int main(){
    int n;
    cin >> n;
    solve(n);
}
