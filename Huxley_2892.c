#include <stdio.h>


// 2892 - Make a two-dimensional array
//https://thehuxley.com/problem/2892

void printa_matriz (int i, int j, int n,int array[n][n])
{
	int aux;
	if (i < n)
	{
		if (j < n)
		{
			if( i == j) 
			{
			    printf("1      ");
			}
			if(i < j)
			{
			    printf("10     ");
			}
			if( i > j)
			{
			    printf("-10    ");
			}
			
			printa_matriz(i, j + 1,n, array);
			
			return;
		}
		printf("\n");j = 0;
		printa_matriz(i+1, j,n, array);
		
	}
}

int main()
{
    int tam;
    scanf("%d", &tam);
    
    int matrix[tam][tam];
    
    printf("Digite a ordem N da matriz:\n");
    printa_matriz(0,0,tam,matrix);
    
    return 0;
}
