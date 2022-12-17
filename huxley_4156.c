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
