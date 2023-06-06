#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

void mirroring(int M, int A[][M], int B[][M]){
    int i,j,k;
    for(i = 1; i <= M; ++i){
    	k = M - 1;
    	for(j = 1; j <= M; ++j){		
    			B[i][k--] = A[i][j];
    	}		
    }
}

int main(){
    int n;
    scanf("%d\n", &n);
    int matriz[n+1][n+1];
    int mirror[n+1][n+1];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            matriz[i][j] = 0;
            mirror[i][j] = 0;
        }
    }

    int g = 0, h;
    char text[500];

    char c;int i = 0, j = 0;

    scanf("%s", text);

    int cont = 0;
    int cdigit = 0;
    int k = 0;
    int digit[2];


    //puts(text);
    while (k < strlen(text)){
        if(isdigit(text[k])){
            digit[g] = text[k] - '0';
            cdigit++;
            g++;
        }
        if(g == 2){
            g = 0;
            matriz[digit[0]][digit[1]] = 1;
        }
        k++;    
    }

    mirroring(n+1, matriz, mirror);

    int b = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(mirror[i][j]){
                printf("(%d,%d)%c", i, j, b != (cdigit/2)-1 ? ',' : '\n'), b++;
            }
        }
    }

    return 0;
}
