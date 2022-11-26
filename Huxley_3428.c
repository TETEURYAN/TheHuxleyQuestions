#include<stdio.h>
#include <stdbool.h>

//3428 - X multiple in the principal diagonal
////https://www.thehuxley.com/problem/3428?locale=pt_BR

void input_matrix (int i, int n, int matrix[][n])
{
	if (i < n * n)
	{
		scanf("%d", &matrix[i / n][i % n]);
		input_matrix(i + 1, n, matrix);
	}
	return;
}

int conta_multiplos_diagonal_principal( int i, int tam, int num, int matrix[][tam])
{
    if( i < tam)
    {
        if(!(matrix[i][i] % num))
        {
            printf("%d ", matrix[i][i]);
            return 1 + conta_multiplos_diagonal_principal(++i, tam, num, matrix);
        }
        return conta_multiplos_diagonal_principal(++i, tam, num, matrix);
    } 
    return 0;
}
int main()
{
    int tam, num;
    scanf("%d%d", &tam, &num);

    int matrix[tam][tam];

    input_matrix(0,tam,matrix);
    int n = conta_multiplos_diagonal_principal(0, tam, num, matrix);
    
    if(!n) printf("NMDX\n");
    
    

}