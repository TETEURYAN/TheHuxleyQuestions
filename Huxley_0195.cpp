#include <iostream>
#include <vector>
using namespace std;

//195 - Caã ao tesouro
//https://www.thehuxley.com/problem/195

vector<vector<int>> complete(int tam, vector<vector<int>> ans, int x, int y, int k) {
    vector<vector<int>> mox(tam, vector<int>(tam, 0));

    int direita = 0;

    while (k >= 0) {
        if (x + k < tam and y + direita < tam)
            mox[y + direita][x + k] = 1;
        if (x + k < tam and y - direita >= 0)
            mox[y - direita][x + k] = 1;
        if (x - k >= 0 and y + direita < tam)
            mox[y + direita][x - k] = 1;
        if (x - k >= 0 and y - direita >= 0)
            mox[y - direita][x - k] = 1;
        if (y - k >= 0 and x - direita >= 0)
            mox[y - k][x - direita] = 1;
        if (y + k < tam and x + direita < tam)
            mox[y + k][x + direita] = 1;
        if (y - k >= 0 and x + direita < tam)
            mox[y - k][x + direita] = 1;
        if (y + k < tam and x - direita >= 0)
            mox[y + k][x - direita] = 1;
        direita++;k--;
    }

    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam; j++)
            ans[i][j] += mox[i][j];

    return ans;
}

void filled(vector<vector<int>> table, int & solve, int & x, int & y, int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            if(table[i][j] > solve){
                solve = max(solve, table[i][j]);
                y = i, x = j;
            }
        }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    vector<vector<int>> table(n, vector<int>(n, 0));

    while (k > 0){
        int x, y, value;
        cin >> x >> y >> value;
        table = complete(n, table, x, y, value);
        k--;
    }

    int solve = 0; int ansX = 0, ansY = 0;

    filled(table, solve, ansX, ansY, n);

    // printa(table, n);

    int cont = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(table[i][j] == solve)
                cont++;

    // cout << "Maior numero de repeticoes: " << cont << " Mais passos: " << solve << endl; 
    if(cont > 1)
        cout << -1 << " " << -1 << endl;
    else    
        cout << ansX << " " << ansY << endl;

    return 0;
}
