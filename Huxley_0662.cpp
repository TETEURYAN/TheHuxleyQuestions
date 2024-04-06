#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// 662 - Troca de Cartas
//https://thehuxley.com/problem/662


using namespace std;
 
const int N1 = (int)2e5 + 100;
#define PI 3.14159265358979323846264338327
#define forn for(int i=0;i<n;i++)
#define fornn for(int i=1;i<=n;i++)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define all(x) (x).begin(), (x).end()
#define f first
#define s second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define yes cout<<"YES"<<'\n';
#define no  cout<<"NO"<<'\n';
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
typedef vector<vi>	adj;
typedef vector<vc>	vvc;
typedef vector<string> vs;
typedef vector<bool> vb;
const long long M = 1e9+7;
#define N  1000000000
#define lli unsigned long long int
#define ll long long


int main()
{
    int n,m;

    while(scanf("%d %d", &n, &m) && !(!n && !m)){
        set<int> carda;
        set<int> cardb;
        forn{
            int u;
            cin >> u;
            carda.insert(u);
        }

        for(int i = 0; i < m; i++){
            int v;
            cin >> v;
            cardb.insert(v);
        }

        int ansa = 0;
        int ansb = 0;

        // cout << nl
        for(int i : carda){
            if(cardb.find(i) == cardb.end()) ansa++;
            // cout << i << " ";
        }

        // cout << nl
        for(int i : cardb){
            if(carda.find(i) == carda.end()) ansb++;
            // cout << i << " ";
        }

        // cout << nl
        cout <<  min(ansa, ansb) << nl


    }
    return 0;
}
