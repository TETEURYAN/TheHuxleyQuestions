#include <bits/stdc++.h>
using namespace std;
#define max INT_MAX

typedef pair<int, int> pares;

class graph {
    int V;
    list<pair<int, int>>* adj;

public:
    graph(int V);
    void addEdge(int u, int v, int cost);
    vector<int> path(int src);
};

graph::graph(int V)
{
    this->V = V;
    adj = new list<pares>[V + 1];
}

void graph::addEdge(int u, int v, int cost)
{
    adj[u].push_back(make_pair(v, cost));
    adj[v].push_back(make_pair(u, cost));
}

vector<int> graph::path(int src)
{
    priority_queue<pares, vector<pares>, greater<pares>> queue;
    vector<int> dist(V + 1, max);

    queue.push(make_pair(0, src));
    dist[src] = 0;

    while (not queue.empty()) {
        int u = queue.top().second;
        queue.pop();

        list<pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int peso = (*i).second;

            if (dist[v] > dist[u] + peso) {
                dist[v] = dist[u] + peso;
                queue.push(make_pair(dist[v], v));
            }
        }
    }

    return dist;
}

int main(){
    int n,m;

    cin >> n >> m;

    graph g(n);

    int u,v, cost;

    for(int i = 0; i < m; i++){
        cin >> u >> v >> cost;
        g.addEdge(u,v,cost);
    }

    vector<int> distance = g.path(1);

    cout << distance[n] << endl;
    

}
