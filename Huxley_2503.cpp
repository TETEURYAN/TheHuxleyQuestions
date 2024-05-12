#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
 
const int N1 = (int)2e5 + 100;
#define PI 3.14159265358979323846264338327
#define forn for(int i=0;i<n;i++)
#define fornn for(int i=1;i<=n;i++)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define all(x) (x).begin(), (x).end()
#define sz(a) (int)(a.size())
#define lower(x) for(auto & i : x) i = tolower(i, locale());
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

string sim = "yes";
string nao = "nao";

const int INF = INT_MIN;

bool vef(vi & arr){
    for(int i = 1; i <= sz(arr); i++){
        if(arr[i] == i){
            return true;
        } 
    }
    return false; 
}


bool backtracking(int table[10][10], int i, int j)
{
    if (i < 0 or j < 0 or i >= 10 or j >= 10 || table[i][j] == 0) return false;
    if (i == 9 and j == 9) return true;

    int u = i + 1;
    int d = i - 1;
    int l = j - 1;
    int r = j + 1;

    int before = table[i][j];
    
    table[i][j] = 0;

    bool pos = false;

    if (u != 10)
        if (table[u][j])
            pos = backtracking(table, u, j);
    if (pos) return pos;

    if (r != 10)
        if (table[i][r])
            pos = backtracking(table, i, r);

    if (pos)
        return pos;

    if (d != -1)
        if ( table[d][j])
          pos = backtracking(table, d, j);
        
    if (pos) return pos;

    if (l != -1)
        if ( table[i][l])
            pos = backtracking(table, i, l);
     
    if (pos) return pos;
        
    table[i][j] = before;

    return pos;
}

void solve(){
    cout << "Vamos nessa, temos que sair rapido..." << endl;
    int tab[10][10];

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            cin >> tab[i][j];

    if (backtracking(tab, 0, 0))
       cout << "Tudo nosso." << endl;
    else
        cout << "Continuem cavando!" << endl;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vi arr(n);
    forn{
        int k;
        cin >> k;
        arr[k]++;
    } 


    if(vef(arr)){
        solve();
    }else cout << "Ja nao se pode confiar nos refens como antigamente..." << nl;

    return 0;

}
