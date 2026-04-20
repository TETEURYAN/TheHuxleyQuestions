#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll n;
    cin >> n;

    vector<ll> p(n), w(n);
    for (ll i = 0; i < n; i++){
        cin >> p[i] >> w[i];
    }

    vector<ll> dp(101, 0);

    for (ll i = 0; i < n; i++){
        for (ll j = 100; j >= w[i]; j--){
            dp[j] = max(dp[j], dp[j - w[i]] + p[i]);
        }
    }

    ll q;
    cin >> q;

    ll ans = 0;
    while (q--){
        ll x;
        cin >> x;
        ans += dp[x];
    }

    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}
