#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
const int N1 = (int)2e5 + 100;
#define DEBUG false
#define db(x)  \
    if (DEBUG) \
    cout << #x << ": " << x << endl
#define PI 3.14159265358979323846264338327
#define forn for(int i=0;i<n;i++)
#define forj for(int j=0;j<n;j++)
#define fornn for(int i=1;i<=n;i++)
#define fornj for(int j=1;j<=n;j++)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define all(x) (x).begin(), (x).end()
#define sz(a) (int)(a.size())
#define lower(x) for(auto & i : x) i = tolower(i, locale());
#define mem(a,b) memset((a),(b),sizeof(a))
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
string norte = "Norte";
string sul = "Sul";
string leste = "Leste";
string oeste = "Oeste";

const int INF = INT_MAX;
    

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a,b;
    cin >> a >> b;

    double ans = a/b;

    printf("%.3lf km/l\n", ans);


}


/*
⡴⠁⠀⠀⠳⣗⡆⠀⠀⠀⠀⠉⠳⣇⠀⢸⠇⠀⢀⡴⠚⡽⠀⠀⠘⠛⠉⠀⠀⠀⢀⣠⡤⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⠀⠀⠈⢳⡄⠀⠀⠀⠀⠀⠀
⣧⠀⠀⠀⠀⠀⠀⢿⢳⣦⠀⠀⣀⡈⠳⠋⠀⠀⡾⠴⠚⠁⣠⡀⠀⠀⢠⡶⣲⠆⠙⠓⠋⠁⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠲⠖⠋⠈⠉⠓⠲⢤⣀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀
⠘⢦⣄⠀⠀⠀⠀⠈⠉⠁⠀⠘⠧⠏⠀⠀⢰⣿⠇⠀⣤⣿⡵⠃⠀⠀⠉⠉⠀⠀⠀⠀⡀⠀⣠⡴⠋⠑⠒⠤⠔⠚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢦⣀⡇⠀⠀⠀⠀⠀⠀
⠾⠀⢸⣟⢿⣀⣀⡤⢾⡀⠀⣀⣴⡶⢦⣀⠀⠀⠀⡞⢧⣀⣀⣠⠦⣄⣀⣠⢿⠲⠦⠾⠉⠉⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⠤⠴⠶⠾⢏⡵⢆⡼⢩⡇⠀⠀⠀⠀⠀⠀
⢰⠀⢸⢻⠀⠀⠀⠀⠈⠛⠋⢹⠀⢧⠀⠈⠉⠓⠚⠁⠀⠀⠀⠀⠀⠀⠹⡄⠸⡇⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⢀⡤⠖⠋⠉⠀⠀⠀⠀⢀⡴⢛⡴⠋⠀⢸⡇⠀⠀⠀⠀⠀⠀
⣿⠀⠘⡞⡇⠀⠀⠀⠀⠀⠀⢸⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡄⡇⠀⠀⠀⠀⠀⢸⠀⠀⠀⢀⡤⠚⠁⠀⠀⠀⠀⠀⠀⢀⡴⠋⢐⣟⣠⡤⠀⢸⠇⠀⠀⠀⠀⠀⠀
⠹⡄⠀⣿⣧⠀⠀⠀⠀⠀⠀⢸⡀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⢙⠀⠀⠀⠀⠀⠸⣄⡴⠞⠉⠀⠀⣀⡤⠴⠚⠛⡇⠐⠛⠛⠛⣿⡿⠓⣲⠿⢻⡆⠀⠀⠀⠀⠀⠀
⣄⢳⡀⢸⣼⡀⠀⠀⠀⠀⠀⠈⣇⠈⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠸⠀⠀⠀⢀⡴⠊⠁⠀⣠⡤⠖⠋⠁⠀⠀⠀⢀⣧⠀⠀⢀⡼⠋⣠⠞⠁⠀⢸⡇⠀⠀⢀⠀⠀⠀
⠙⢮⣣⠀⢧⢳⡄⠀⠀⠀⠀⠀⢻⡀⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡆⢀⣤⠖⠋⠀⢀⣠⠟⠋⠀⠀⠀⠀⠀⠀⠀⠠⢿⠀⠀⠛⢢⣴⣳⠃⢀⣠⣿⡇⠀⢀⡏⡀⠀⠀
⠀⠈⠻⣧⡘⢆⠱⡄⠀⠀⠀⠀⠀⢣⠈⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡶⠋⠀⠀⣠⠴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⣠⠞⣽⣷⡾⡍⢀⡏⡇⠀⡼⠀⡇⠀⠀
⠀⠀⠀⠙⢿⣝⠲⠼⣦⣤⣀⡀⠀⠈⢳⡘⣧⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠚⠁⠀⢀⡴⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠴⠛⠉⠉⢀⣼⡵⠋⣸⣇⡼⠁⠀⡇⠀⠀
⠀⠀⠀⠀⠀⠉⠳⣦⣄⠈⠉⠉⠛⠳⠶⠿⠾⠷⠶⠶⠶⠒⠒⠛⠉⠁⢀⣀⡴⠚⠉⠀⠀⠀⠀⠀⢀⣠⣴⣶⣶⣶⣭⣙⠶⡄⠀⠀⠉⠓⠦⡄⠀⣼⣿⠟⠉⠉⠙⣇⠀⠀⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠶⣄⣀⡀⠀⠀⠀⠀⠀⢀⣀⣀⣠⠴⠚⠉⠁⠀⠀⠀⣀⣀⣤⣶⣾⣿⡿⠟⠛⠉⠉⠉⠛⠿⣦⠀⠀⠀⠀⠀⣿⠟⣸⠃⠀⡴⢇⠀⢻⡀⠀⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⠟⠉⠛⠛⢛⣿⣏⣛⣉⣩⣤⣤⣤⣄⡀⠀⠀⠀⠹⠿⠟⠛⣋⣠⠤⠄⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⣿⢀⡇⠀⡼⢧⠘⠀⢸⢷⠀⢷⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⣄⣤⣾⣿⡿⠿⠿⠿⠿⠿⠿⠟⠋⠀⠀⠀⠀⠀⠀⡾⠉⡠⡤⣶⣿⣿⣻⡄⠈⢳⡄⠀⠀⠀⠀⠀⠀⣼⣼⠀⣸⢷⡈⡇⠀⢸⠘⣆⢸⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡟⠿⠁⠀⠀⠀⠀⠀⠀⠀⠀⣄⠀⠀⠀⠀⠀⠀⢧⠀⢰⡇⠹⣿⣿⠿⠧⠒⠉⠀⠀⠀⠀⠀⠀⣠⣿⠏⢀⡇⢸⡇⡇⠀⣾⠀⢹⣸⡆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡄⠀⠀⣠⣤⣤⣶⣶⡾⣅⠀⠸⠷⠀⠀⠀⠀⠀⠈⠓⠛⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠛⢠⣾⡅⢸⡟⢁⣼⠋⠀⠀⢯⡇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⢠⡊⠀⢻⣿⣿⣿⠥⠼⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢟⡽⠀⠀⢻⣿⣿⡃⣰⡿⠓⢤⡀⠀⠈⢧⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡅⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣮⠞⠁⠀⠀⣟⢛⣿⠾⢿⠒⠲⣄⢳⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠋⠀⠀⠀⠀⡿⠉⠀⠀⠘⡆⠀⢸⠈⣧⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⡇⠀⠀⠀⠀⢸⡏⠀⠀⠀⠀⢱⣠⠏⠀⠘⡆⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠟⠁⢸⡇⠀⠀⠀⠀⢸⠁⠀⠀⠀⠀⡸⠋⠀⡀⠀⢳⡀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠏⠀⠀⢸⡆⠀⠀⠀⠀⡟⠀⠀⠀⣠⠞⠁⣀⠴⢻⠀⠈⣇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⠴⠋⠀⠀⠀⠀⠀⡇⠀⠀⠀⣼⠃⠀⣠⠞⠁⣠⠾⠋⠀⠀⡇⠀⢸⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡤⠤⠚⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⢀⡴⠁⣠⠞⣁⣴⠞⠋⠀⠀⠀⠀⢿⠀⠸⡄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠻⣄⠀⠐⣦⠤⠴⠒⠒⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⣡⠞⣡⡶⢋⣥⡤⣤⡀⠀⢀⣤⣘⡆⠀⢷
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣯⠀⢹⢢⡀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⠵⢛⣡⠞⠉⡾⠉⣠⣀⠀⡇⠀⡟⢰⠏⢣⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠶⠚⢻⠀⠸⡄⠱⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡼⣟⣡⡴⠋⠁⠀⠀⣇⠸⣇⣼⡇⣷⣤⢸⢘⡀⠘⠇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠖⠉⠁⠀⠀⢰⡿⣆⠀⠻⡀⠹⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡴⠋⣠⣿⠁⠀⠀⠀⠀⠀⠙⣦⡬⠁⢰⠞⠁⣾⢸⠃⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠞⠉⠀⠀⠀⠀⠀⠀⠸⣇⠹⡄⠀⢇⠀⢹⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠋⠀⣼⠃⠸⡀⠀⠀⡀⣀⡀⠀⠷⠤⢄⠈⣧⡼⠁⡾⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠔⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⢳⠀⠸⡆⢸⡌⠳⢤⠤⠄⠤⠤⠤⠤⠤⠔⠋⠀⠀⠀⠀⢸⡀⠀⡇⠀⠸⡄⢶⣁⣀⣀⣀⣸⠀⠁⣠⠞⠁⠀⠀⠀⠀
⠀⠀⢀⡤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣄⢷⠀⠹⡄⢱⡄⠈⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣇⠀⢹⡀⠀⠙⠦⠬⠭⠭⠥⠴⠖⠋⠁⠀⠀⠀⠀⠀⠀⠀
*/
