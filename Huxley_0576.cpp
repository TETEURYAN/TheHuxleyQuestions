#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> graph[], int u, int now, vector<int> & color)
{

  if (color[u] != -1) return(color[u] != 1 - now);
    color[u] = now;
  for (auto v: graph[u])
    if (not dfs(graph, v, 1 - now, color))
      return false;
  return true;
}

void solve(int n){

    int E;
    cin >> E;

    vector<int> edges[n];
    vector<int> color(n, -1);
    
    for(int i = 0; i < E; i++){
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    printf("%s\n", dfs(edges, 0, 0, color) ? "BICOLORABLE." : "NOT BICOLORABLE.");
}

int main() {
    int n;
    while(scanf("%d", &n) and n){
        solve(n);
    }
	return 0;
}