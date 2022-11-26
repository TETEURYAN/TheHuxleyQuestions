#include <stdio.h>

void percorre_tab(int i, int tam, char sequencia[], int *novas_colunas, int *antigas_colunas, int *novas_linhas, int *antigas_linhas  )
{
    if( i < tam)
    {

        if (sequencia[i] == 'L')
            {
                *antigas_colunas += -1;
            } 
            else if (sequencia[i] == 'R')
            {
                *novas_colunas += 1;
            } 
            else if (sequencia[i] == 'U')
            {
                *antigas_linhas += -1;
            }
            else if (sequencia[i] == 'D')
            {
                *novas_linhas += 1;
            } 
            percorre_tab(++i, tam, sequencia, novas_colunas, antigas_colunas, novas_linhas, antigas_linhas);
    }
    return;    
}

void condicao( int linha, int coluna, int novas_colunas, int antigas_colunas, int novas_linhas, int antigas_linhas)
{
    if (linha >= 0 && novas_linhas >= linha)
    {
        if (coluna >= 0 && novas_colunas >= coluna)
        {
            printf("YES");
        } 
        else if (coluna <= 0 && antigas_colunas <= coluna)
        {
            printf("YES");
        } 
        else
        {
            printf("NO");
        } 
    }
    else if (linha <= 0 && antigas_linhas <= linha)
    {
        if (coluna >= 0 && novas_colunas >= coluna)
        {
            printf("YES");
        } 
        else if (coluna <= 0 && antigas_colunas <= coluna)
        {
            printf("YES");
        } 
        else 
        {
            printf("NO");
        }
    }

    else printf("NO");

}
int main(){
    int tamanho;
    int novas_colunas = 0, antigas_colunas = 0, novas_linhas = 0, antigas_linhas = 0;

    scanf("%d", &tamanho);
    
    char sequencia[tamanho];
    scanf("%s", sequencia);

    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    percorre_tab(0,tamanho,sequencia, &novas_colunas, &antigas_colunas, &novas_linhas, &antigas_linhas);
    condicao(linha, coluna, novas_colunas, antigas_colunas, novas_linhas, antigas_linhas);

    return 0;

}