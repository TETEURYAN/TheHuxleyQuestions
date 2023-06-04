#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

//4295 - Soma de Diagonais
//https://thehuxley.com/problem/4295

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void inputarr(int i, int * arr, int coluna, int matrix[][coluna])
{
	if (i < coluna * coluna)
	{
		matrix[i / coluna][i % coluna] = arr[i];
		inputarr(i + 1, arr, coluna, matrix);
	}
	return;
}

int main(){
    char stringOne[50];
    char stringTwo[50];

    int arr[50];

    fgets(stringOne, 50, stdin);
    fgets(stringTwo, 50, stdin);

    int colm = 0;
    int i = 0;

    while(i < strlen(stringOne)){
        if(isdigit(stringOne[i]))
            colm++;
        i++;    
    }

    int tam = sqrt(colm);

    int arrOne[tam][tam];
    int arrTwo[tam][tam];

    colm = 0;
    i = 0;
    while(i < strlen(stringOne)){
        if(isdigit(stringOne[i]))
            arr[colm++] = stringOne[i] - '0';
        i++;    
    }

    inputarr(0, arr, tam, arrOne);

    i = 0;
    colm = 0;
    while(i < strlen(stringTwo)){
        if(isdigit(stringTwo[i]))
            arr[colm++] = stringTwo[i] - '0';
        i++;    
    }

    inputarr(0, arr, tam, arrTwo);

    int sum = 0;

    for(int i = 0; i < tam; i++)
        sum += arrOne[i][i];     

    for (int i = 0; i < tam; i++)
        for (int j = 0; j < i; j++) 
            swap(&arrTwo[i][j], &arrTwo[j][i]);
        
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam/2; j++) 
            swap(&arrTwo[i][j], &arrTwo[i][tam - j - 1]);
        
    for(int i = 0; i < tam; i++)
        sum+= arrTwo[i][i];

    printf("%d\n", sum);    

    return 0;
}
