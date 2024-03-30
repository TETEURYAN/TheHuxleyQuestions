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
 
class UnionFind {
private:
    int* parent;
    int* size;

public:
    int maximo;

    UnionFind(int n) {
        maximo = 0;
        this->parent = new int[n];
        this->size = new int[n];
        for (int i = 0; i < n; ++i) {
            parent[i] = i; 
            size[i] = 1;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (size[rootX] < size[rootY]) {
                parent[rootX] = rootY;
                size[rootY] += size[rootX];
                if(size[rootY] > maximo) maximo = size[rootY];
            } else {
                parent[rootY] = rootX;
                size[rootX] += size[rootY];
                if(size[rootX] > maximo) maximo = size[rootX];
            }
        }
    }

    int getSize(int x) {
        return size[find(x)];
    }

    int getBigDisnoint(){
        return maximo;
    }
};


void solve(){
    ll n, m, i =0;
    cin >> n >> m;
    UnionFind cj(n);


    for(int i = 0; i < m; i++){
        ll  a,b;
        cin >> a >> b;
        cj.unite(a,b);
    }

    cout << cj.getBigDisnoint() << nl;

}

int main() {
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
