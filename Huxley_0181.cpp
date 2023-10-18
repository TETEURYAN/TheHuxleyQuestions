#include <bits/stdc++.h>
using namespace std;
#define maximo INT_MAX/2

int floyd(int src, int V, vector<vector<int>> & edges ){
    vector<vector<int>> dist(V, vector<int>(V+1, maximo));

    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(i == j) dist[i][j] == 0;
            else dist[i][j] = edges[i][j];
        }
    }

    dist[src][0] = 0;
    dist[0][src] = 0;

    int minimo = 0;

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    
    vector<int> distMax; //maximizar os maiores caminhos e depois encontrar o menor deles
    for(int i = 0; i < V; i++){
        int ex = 0;
        for(int j = 0; j < V; j++){
            ex = max(ex, dist[i][j]);
        }
        distMax.push_back(ex);
    }
    sort(distMax.begin(), distMax.end());
    
    return distMax[0];
}

int main()
{
    
    int V, E;
    cin >> V >> E;

    int a, b, cost;
    vector<vector<int>> edges(V, vector<int>(V, maximo));

    for (int i = 0; i < E; i++){
        cin >> a >> b >> cost;
        edges[a][b] = cost;
        edges[b][a] = cost;
    }

    int ans = floyd(0, V, edges);
    cout << ans << endl;

    return 0;
}
