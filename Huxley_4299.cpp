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

int ans = 0;
 
int end_parenthesis(string token, int index)
{
    for(int i = index; i < token.size(); i++)
    {
        if(token[i] == ')')
        {
            return i;
        }
    }
    return 0;
}
 
void maybe_word(string token, int index, bool available_letters[][26], int size)
{
    if(index == token.size())
    {
        return;
    }
    if(token[index] == '(')
    {
        int end = end_parenthesis(token, index);
        for(int i = index + 1; i < end; i++)
        {
            available_letters[size][token[i] - 'a'] = true;
            // cout << " " << (token[i]-'a') << " size: " << size << nl;
        }
        // cout << nl
        maybe_word(token, end + 1, available_letters, size + 1);
    }
    else
    {
        available_letters[size][token[index] - 'a'] = true;
        maybe_word(token, index + 1, available_letters, size + 1);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int l, d, n;
 
    cin >> l >> d >> n;
 
    string words[d];
 
    for(int i = 0; i < d; i++)
    {
        cin >> words[i];
    }
 
    string token;
 
    for(int i = 0; i < n; i++)
    {
        bool available_letters[15][26] {};
        
        cin >> token;
        maybe_word(token, 0, available_letters, 0);
 
        for(int j = 0; j < d; j++)
        {
            int ok = 1;
            for(int p = 0; p < l; p++)
            {
                if(available_letters[p][words[j][p] - 'a'] == false)
                {
                    ok = 0;
                    break;
                }
            }
            if(ok)
            {
                ans++;
            }
        }
        cout << "Caso #" << i + 1 << ": " << ans << '\n';
        ans = 0;

    //     char let = 'a';
    //     for(int i = 0; i < 15; i++){
    //         cout << let << ": ";
    //         for(int j = 0; j < 26; j++){
    //             cout << available_letters[i][j] << " ";
    //         }
    //         cout << nl
    //         let += 1;
    //     }
    }
    return 0;
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
