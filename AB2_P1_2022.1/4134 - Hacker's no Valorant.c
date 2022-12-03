typedef struct Player {
    int linha;
    int coluna;
} Player;
 
int tiro(int n, int matriz[][n], Player player, Player enemy, int incr_i, int incr_j)
{
    for(int i = player.linha, j = player.coluna; i < n && i >= 0 && j < n && j >= 0; i += incr_i, j += incr_j)
    {
        if (i == enemy.linha && j == enemy.coluna) return 0;
        if (matriz[i][j] == 1)
        {
            matriz[i][j] = 0;
            return 1;
        }
    }
    
    return 0;
}
 
int main() {
    Player anderson, luiza;
    int n;
    int kills_anderson, kills_luiza;
    scanf("%d", &n);
    
    int matriz[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    scanf("%d %d", &luiza.linha, &luiza.coluna);
    scanf("%d %d", &anderson.linha, &anderson.coluna);
    
    kills_luiza = 
        tiro(n, matriz, luiza, anderson, 1, 1) +
        tiro(n, matriz, luiza, anderson, 1, -1) +
        tiro(n, matriz, luiza, anderson, -1, -1) +
        tiro(n, matriz, luiza, anderson, -1, 1);
        
    kills_anderson = 
        tiro(n, matriz, anderson, luiza, 0, 1) +
        tiro(n, matriz, anderson, luiza, 0, -1) +
        tiro(n, matriz, anderson, luiza, 1, 0) +
        tiro(n, matriz, anderson, luiza, -1, 0);
    
    printf("aziul matou %d\n", kills_luiza);
    printf("nosredna matou %d\n", kills_anderson);
    
    return 0;
}