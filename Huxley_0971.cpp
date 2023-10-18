#include <bits/stdc++.h>
using namespace std;

int prim(vector<pair<int, int>> edges[], int V, int start)
{
    vector<int> cost(V,INT_MAX);
    vector<bool> visited(V,false);

    int sum = 0;
    cost[start] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    
    pq.push({cost[start], start});
    
    while (not pq.empty()){
        int weight = pq.top().first, v = pq.top().second;
        pq.pop();
        if (visited[v]) continue;
        visited[v] = true;

        sum += weight;
        for (auto u : edges[v]){
            cost[u.first] = u.second;
            pq.push({cost[u.first], u.first});
        }
    }
    return sum;
}

void solve(int n, vector<int> & arr) {
    while (n--) {
        int a;
        cin >> a; 

        vector<pair<int,int>> cord;
        vector<pair<int,int>> edges[a];

        for (int i = 0; i < a; i++) {
            int x, y;
            cin >> x >> y; 
            cord.push_back({x, y});
        }

        for(int i = 0; i < a; i++){//Como o grafo é completo, precisamos adicionar a distÂncia de cada vértice para todos os outros.
            for(int j = 0; j < a; j++){
                int tam = abs(cord[i].first - cord[j].first) + abs(cord[i].second - cord[j].second);
                edges[i].push_back({j, tam});
            }
        }
        int sum = prim(edges, a, 1);
        arr.push_back(sum);
    }
}

int main() {
    vector<int> dist;
    int n;
    cin >> n;
    solve(n, dist);

    for(int i = 0; i < n; i++){
        cout << i << ": " << dist[i] << endl;
    }
}
