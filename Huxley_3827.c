#include<stdio.h>
#include <math.h>
#include <stdbool.h>

//3827 - Joguinho da aprovacao
//https://thehuxley.com/problem/3827

void print_matrix (int line, int column, int size, int array[][size])
{
	
	for( line = 0; line < size; line++)
	{
		for( column = 0; column < size; column++)
		{
			printf("%d ", array[line ][column]);
			if(column == size-1) printf("\n");
		}
		column = 0;
	}
    return;
}

void input_matrix (int i, int linha, int coluna, int matrix[][coluna])
{
	if (i < linha * coluna)
	{
		scanf("%d", &matrix[i / coluna][i % coluna]);
		input_matrix(i + 1, linha, coluna, matrix);
	}
	return;
}

void input_char(int i, int tam, char array[])
{
	if (i < tam)
	{
		scanf(" %c", &array[i]);
		if (array[i] != '\n') 
		{
		    input_char(i + 1, tam, array);
		}    
	}
}


int percorre_tab(int tam, int movimento[][tam], char sequencia[])
{
    int dado;
    int l = 0, ll = 0;

    scanf("%d", &dado);

    for( int i = 0; i < dado; i++)
    {
        int qtd, posicao, nova_linha, nova_coluna;

        scanf("%d%d", &qtd, &posicao);

        for( int i = 0; i<qtd; i++)
        {
            if(sequencia[posicao] == 'C' && movimento[l-1][ll] ==1 )
            {
                l --;
            }
            if(sequencia[posicao] == 'B' && movimento[l+1][ll] == 1)
            {
                l ++;
            }
            if(sequencia[posicao] == 'D' && movimento[l][ll+1] == 1)
            {
                ll ++;
            }
            if(sequencia[posicao] == 'E' && movimento[l][ll - 1] == 1)
            {
                ll --;
            }
        }
            printf("%d %d\n", l, ll);

    }
    return ((l && ll) == tam-1) ? 1 : 0;
}

int main()
{
    
    int tamanho;
    
    scanf("%d", &tamanho);
    
    tamanho = sqrt(tamanho);
    
    //printf("%d", tamanho);

    int matrix1[tamanho][tamanho];

    input_matrix(0,tamanho,tamanho,matrix1);
    //print_matrix(0,0,tamanho, matrix1);

    int tamanho_sequencia = 4;

    char sequencia[tamanho_sequencia];

    input_char(0, tamanho_sequencia, sequencia);
    
    //printf("\n");

    //printf("\n");
    

    //printf("%d\n", percorre_tab(tamanho, matrix1, sequencia));
    int dado;
    int l = 0, ll = 0;

    scanf("%d", &dado);

    for( int i = 0; i < dado; i++)
    {
        int qtd, posicao;

        scanf("%d%d", &qtd, &posicao);

        for( int j = 0; j<qtd; j++)
        {
            if(sequencia[posicao-1] == 'C' && matrix1[l-1][ll] == 1)
            {
                l--;
            }
            if(sequencia[posicao-1] == 'B' && matrix1[l+1][ll] == 1)
            {
                l++;
            }
            if(sequencia[posicao-1] == 'D' && matrix1[l][ll+1] == 1)
            {
                ll++;
            }
            if(sequencia[posicao-1] == 'E' && matrix1[l][ll - 1] == 1)
            {
                ll--;
            }
        }
            //printf("%d %d\n", l, ll);

    }
    
    //printf("%d\n", tamanho - 1);
    printf("%s", (ll == tamanho-1 && l == tamanho-1)? "EU PASSEI EM P1" : "AINDA TENHO CHANCE NA REAV");
  
    return 0;
}