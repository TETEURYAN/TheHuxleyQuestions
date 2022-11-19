#include<stdio.h>
#include <stdbool.h>

//2103 - Family Duel
////https://www.thehuxley.com/problem/2103?locale=pt_BR

void input_matrix (int i, int n, int matrix[][n])
{
	if (i < n * n)
	{
		scanf("%d", &matrix[i / n][i % n]);
		input_matrix(i + 1, n, matrix);
	}
	return;
}

bool principal (int i, int n, int matrix[][n])
{
    for(i = 0; i < n; i++ )
    {
		if (matrix[i][i] != 1) return false;
    }
	return true;
}

bool secundaria (int i, int n, int matrix[][n])
{
	if (n != -1)
	{
		if (matrix[n][i] != 1) return false;
	    return secundaria(i + 1, n - 1, matrix);
	}
	return true;
}


int run_matrix (int i, int n, int matrix[][n])
{
    int c = 0;
    for(i = 0; i < n*n; i++)
    {
        if (matrix[i / n][i % n] == 1) c++;
    }
	return c;
}

bool validade (int matrix[][3])
{
	if (run_matrix(0, 3, matrix) == 3)
	{
		if (principal(0, 3, matrix)) return true;
		if (secundaria(0, 2, matrix)) return true;
	}
	return false;
}

bool desempate(int matrix1[][3], int matrix2[][3])
{
	if (run_matrix(0, 3, matrix1) == 3 && run_matrix(0, 3, matrix2) == 3)
	{
		if (principal(0, 3, matrix1) && secundaria(0, 2, matrix2)) return false;
		if (principal(0, 3, matrix2) && secundaria(0, 2, matrix1)) return false;
	}

	return true;
}

void batalha (int i, int life_luke, int life_dart)
{
	if ( !i || ((life_luke) <= 0) || ((life_dart) <= 0))
	{
    printf("%s", (life_dart == life_luke) ? "Houve empate.\n" : (life_dart > life_luke) 
                                ? "Darth Vader venceu.\n" :"Luke Skywalker venceu.\n" );
	    return;
	}
	int golpe_luke[3][3], golpe_dart[3][3];
	
	input_matrix(0, 3, golpe_luke);
	input_matrix(0, 3, golpe_dart);
	
	if (validade(golpe_luke))
	{
		if(desempate(golpe_luke, golpe_dart))
			life_dart -= 15;
	}
	
	if (validade(golpe_dart))
	{
		if(desempate(golpe_luke, golpe_dart))
			life_luke -= 15;
	}
	
	return batalha (i - 1, life_luke, life_dart);
}

int main ()
{
	int life_luke, life_dart;
	scanf("%d %d", &life_luke, &life_dart);
	
	batalha(10, life_luke, life_dart);
	return 0;
}
