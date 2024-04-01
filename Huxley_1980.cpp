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

char matrizes[100][100][100];

vector<char> solution;

void solve(int z, int y, int x, int n, int m, int l, int k){
    if(z < 0 or y < 0 or x < 0 or z > n or y >= m or x >= l or matrizes[z][y][x] == '#' ) return;
    if(z == n-1 and y == m-1 and x == l-1){
        cout << k << nl
        for(int i = 0; i < solution.size(); i++){
            cout << solution[i] << (i == solution.size() - 1 ? "" :  " -> ");
        }
        cout << nl
        exit(0);
    }

    matrizes[z][y][x] = '#';
    
    solution.pb('F');
    solve(z+1,y,x,n,m,l,k+1);
    solution.pp();

    solution.pb('B');
    solve(z-1,y,x,n,m,l,k+1);
    solution.pp();

    solution.pb('D');
    solve(z,y+1,x,n,m,l,k+1);
    solution.pp();

    solution.pb('U');
    solve(z,y-1,x,n,m,l,k+1);
    solution.pp();

    solution.pb('R');
    solve(z,y,x+1,n,m,l,k+1);
    solution.pp();

    solution.pb('L');
    solve(z,y,x-1,n,m,l,k+1);
    solution.pp();

    matrizes[z][y][x] = '.';


}

int main() {
    

    int z,y,x;
    cin >> z >> y >> x;


    for(int k = 0; k < z; k++)
        for(int i = 0; i < y; i++)
            for(int j = 0; j < x; j++){
                cin >> matrizes[k][i][j];
            }
    solve(0,0,0,z,y,x,0);        

}
