#include <bits/stdc++.h>
using namespace std;


int cmp(const string &a, const string &b, int &cnt) {
    int n = min(a.size(), b.size());

    for (int i = 0; i < n; i++) {
        cnt++;
        if (a[i] != b[i]) {
            return a[i] - b[i];
        }
    }


    return (int)a.size() - (int)b.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> W(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }

    vector<string> Q(M);
    for (int i = 0; i < M; i++) {
        cin >> Q[i];
    }

    for (int i = 0; i < M; i++) {
        int l = 0, r = N - 1;
        int cnt = 0;
        bool found = false;

        while (l <= r) {
            int m = (l + r) / 2;

            int res = cmp(W[m], Q[i], cnt);

            if (res == 0) {
                found = true;
                break;
            } else if (res < 0) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        if (found) {
            cout << "SIM " << cnt << "\n";
        } else {
            cout << "NAO " << cnt << "\n";
        }
    }

    return 0;
}
