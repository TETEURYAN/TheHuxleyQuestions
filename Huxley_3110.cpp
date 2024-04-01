#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
 
const int N1 = (int)2e5 + 100;
#define PI 3.14159265358979323846264338327
#define forn for(i=0;i<n;i++)
#define fornn for(i=1;i<=n;i++)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define all(x) (x).begin(), (x).end()
#define f first
#define s second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define yes cout<<"Yes"<<'\n';
#define no  cout<<"No"<<'\n';
#define one  cout<<-1<<'\n';
#define nl  '\n';
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef set<ll> si;
typedef set<char> sc;
typedef vector<ll> vi;
typedef priority_queue<ll> pri;
typedef vector<char> vc;
typedef pair<ll,ll> pi;
typedef vector<pi>	vpi;
typedef vector<vi>	vvi;
typedef vector<vc>	vvc;
typedef vector<string> vs;
typedef vector<bool> vb;
const long long M = 1e9+7;
#define N  10000005
#define lli unsigned long long int
#define ll long long


const int INF = INT_MIN;


vector<vector<int>> floyd(vector<vector<int>> &grafo) {
  for (int i = 0; i < grafo.size(); i++) {
    for (int j = 0; j < grafo[i].size(); j++) {
        if(i == j) grafo[i][j] = 0;
        grafo[i][j] = -grafo[i][j];
    }
  }

  for (int k = 0; k < grafo.size(); k++) {
    for (int i = 0; i < grafo.size(); i++) {
      for (int j = 0; j < grafo.size(); j++) {
        grafo[i][j] = max(grafo[i][j], grafo[i][k] + grafo[k][j]);
      }
    }
  }

  for (int i = 0; i < grafo.size(); i++) {
    for (int j = 0; j < grafo[i].size(); j++) {
      grafo[i][j] = -grafo[i][j];
    }
  }

  return grafo;
}

int main() {

    int V,E;
    cin >> V >> E;

    int a, b, cost;
    vector<vector<int>> edges(V+1, vector<int>(V+1, N));
    vector<vector<int>> adj(V+1);

    for (int i = 0; i < E; i++){
        cin >> a >> b >> cost;
        edges[a][b] = cost;
        edges[b][a] = cost;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> blue;
    vector<int> red;

    vector<vector<int>> dist = floyd(edges);

    for(int i = 1; i <= V; i++){
        int sum = 0;
        for(int j : adj[i]){
            sum+= j;
        }
        if(sum & 1) blue.pb(i);
        else red.pb(i);
        sum = 0;
    }

    int maxred = 0;
    pair<int, int> vered;
    for(int i = 0; i < red.size(); i++){
         for(int j = 0; j < red.size(); j++){
            if(maxred < dist[red[i]][red[j]]){
                maxred = dist[red[i]][red[j]];
                vered.first = red[i];
                vered.second = red[j];
            }
         }
    }

    int maxblue = 0;
    pair<int, int> veblue;
    for(int i = 0; i < blue.size(); i++){
         for(int j = 0; j < blue.size(); j++){
            if(maxblue < dist[blue[i]][blue[j]]){
                maxblue = dist[blue[i]][blue[j]];
                veblue.first = blue[i];
                veblue.second = blue[j];
            }
         }
    }

    cout << vered.first << " " << vered.second << nl
    cout << veblue.first << " " << veblue.second << nl

}
