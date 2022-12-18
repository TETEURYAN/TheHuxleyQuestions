#include <stdio.h>


void coleta_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
     for(int i =0; i < linhas; i++){
        for(int j =0; j< colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}


void zerar_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
     for(int i =0; i < linhas; i++){
        for(int j =0; j< colunas; j++){
            matriz[i][j] =0;
        }
    }
}

int main(){
    int tabuleiro[8][8];
    int t1_x=0, t1_y=0, t2_x=0, t2_y=0, p_x=0, p_y=0, v_x=0, v_y=0, opa=0;
    zerar_matriz(8,8,tabuleiro);
    for(int i =0; i < 8; i++){
        for(int j =0; j< 8; j++){
            scanf("%d", &tabuleiro[i][j]);
            if(tabuleiro[i][j] == 1){
                if(opa==0){
                    t1_x = j;
                    t1_y = i;
                    opa++;
                   // printf("x:%d, y:%d\n", t1_x, t1_y);
                }
                else{
                    t2_x = j;
                    t2_y = i;
                 //   printf("x:%d, y:%d\n", t2_x, t2_y);
                }
            }
            else if(tabuleiro[i][j] == 2){
                p_x = j;
                p_y = i;
            }
            else if(tabuleiro[i][j] == 3){
                v_x = j;
                v_y = i;
            }
        }
    }
    int tab_novo[8][8];
    zerar_matriz(8,8,tab_novo);
    for(int k =0; k< 8; k++){
        tab_novo[t1_y][k] =1;
        tab_novo[k][t1_x] =1;
        //tab_novo[t2_y][k] =1;
        //tab_novo[k][t2_x] =1;
    }
   // printf("x:%d, y:%d\n", t2_x, t2_y);
    for(int f =0; f< 8; f++){
        //tab_novo[t1_y][k] =1;
        //tab_novo[k][t1_x] =1;
        tab_novo[t2_y][f] =1;
        tab_novo[f][t2_x] =1;
    }
        tab_novo[p_y+1][p_x] =1;
        tab_novo[p_y-1][p_x] =1;
        tab_novo[p_y][p_x+1] =1;
        tab_novo[p_y][p_x-1] =1;
        tab_novo[p_y+1][p_x+1] =1;
        tab_novo[p_y-1][p_x-1] =1;
        tab_novo[p_y+1][p_x-1] =1;
        tab_novo[p_y-1][p_x+1] =1;
    int cont =0;
    //printf("x:%d, y:%d\n", v_x, v_y);

    if(tab_novo[v_y+1][v_x] == 0 && (v_y<7)){
         cont++;
       //  printf("1 ");
    }
    if(tab_novo[v_y-1][v_x] == 0 && (v_y>0)){
         cont++;
        // printf("2 ");
    }
    if(tab_novo[v_y][v_x+1] == 0 && (v_x<7)){
         cont++;
      //   printf("3");
    } 
    if(tab_novo[v_y][v_x-1] == 0 && (v_x>0)){
         cont++;
      //   printf("4 ");
    } 
    if(tab_novo[v_y+1][v_x+1] == 0 && (v_y<7 && v_x<7)){
         cont++;
        // printf("5 ");
    }
    if(tab_novo[v_y-1][v_x-1] == 0 && (v_y>0 && v_x>0)){
         cont++;
    //     printf("6 ");
    } 
    if(tab_novo[v_y+1][v_x-1] == 0 && (v_y <7 && v_x > 0)){
         cont++;
       //  printf("7 ");
    } 
    if(tab_novo[v_y-1][v_x+1] == 0 && (v_y>0 && v_x<7)){
         cont++;
         //printf("8 ");
    } 
    //printf("%d", cont);
    if(cont ==0){
        if(tab_novo[v_y][v_x] ==1) printf("Xeque-mate");
        else printf("Afogado");
    }
    if(cont!=0) printf("Nao ocorreu ainda");
    /*
    printf("\n");
    for(int i =0; i < 8; i++){
        printf("\n");
        for(int j =0; j < 8; j++){
            printf("%d ",tab_novo[i][j]);
        }
    
    }
    */

    return 0;
}


#include <stdio.h>
 
// campo é o tabuleiro e m é a matriz de ataque de Pedro, x e y é a posicao da peca atacante
void ataque_torre(int campo[8][8], int m[8][8], int x, int y)
{
    //ataca pra a direita
    for(int i = x;i < 8; i++)
    {
        if(campo[i][y] < 3 && campo[i][y] > 0 && i != x)
            break;
        m[i][y] = 1;
    }
    //ataca pra a esquerda
    for(int i = x;i >= 0; i--)
    {
        if(campo[i][y] < 3 && campo[i][y] > 0 && i != x)
            break;
        m[i][y] = 1;
    }
    //ataca pra baixo
    for(int i = y;i < 8; i++)
    {
        if(campo[x][i] < 3 && campo[x][i] > 0 && y != i)
            break;
        m[x][i] = 1;
    }
    //ataca pra cima
    for(int i = y;i >= 0; i--)
    {
        if(campo[x][i] < 3 && campo[x][i] > 0 && y != i)
            break;
        m[x][i] = 1;
    }
 
}
void ataque_rei(int campo[8][8], int m[8][8], int x, int y)
{
    //ataca todas as casas em todas as direcoes em range 1
    for(int i = x - 1; i <= x + 1; i++)
        for(int j = y - 1; j <= y + 1; j++)
            if(i >= 0 && i < 8 && j >= 0 && j < 8)
                m[i][j] = 1;
}
 

/*
int main()
{
/*
    Explicacao do algoritmo, pra cada peça atacante, guardo todas as casas sendo atacadas em uma matriz
    com isso, checaremos se todas as casas em volta do rei estao sendo atacadas
*/
 
    int campo[8][8], atacadas[8][8] = {0}, rei_x, rei_y, afogamento = 0, cheque = 0;
    
// scanea o campo
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            scanf("%d", &campo[i][j]);
 
// faz os ataques, registra na matriz de atacados, e acha o rei
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            if(campo[i][j] == 1)
                ataque_torre(campo, atacadas, i, j);
 
            else if(campo[i][j] == 2)
                ataque_rei(campo, atacadas, i, j);
 
            else if(campo[i][j] == 3)
            {
                rei_x = i;
                rei_y = j;
            }
        }
 
// conta quantas casas estão sendo atacadas no quadrado 3x3 em volta do rei
    for(int i = rei_x - 1; i <= rei_x + 1; i++)
        for(int j = rei_y - 1; j <= rei_y + 1; j++)
            if(i < 0 || i >= 8 || j < 0 || j >= 8 || atacadas[i][j] == 1)
                afogamento++;
 
// checa se o rei esta em cheque
    if(atacadas[rei_x][rei_y] == 1)
        cheque = 1;
 
// se 9 casas no quadrado 3x3 em volta do rei estiverem atacadas, xeque-mate
    if(afogamento == 9)
        printf("Xeque-mate\n");
 
// se o rei nao esta em cheque mas nao pode se mover(todas as casas em torno dele estao atacadas), afogamento
    else if(afogamento == 8 && cheque == 0)
        printf("Afogado\n");
 
// se o rei pode sair do ataque, nao ocorreu ainda
 
    else
        printf("Nao ocorreu ainda\n");
 
// Descomente para ver a matriz de atacadas
// for(int i = 0; i < 8; i++)
// {
//     for(int j = 0; j < 8; j++)
//         printf("%d ", atacadas[i][j]);
//     printf("\n");
// }
 
    return 0;
}
*/
