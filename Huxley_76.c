
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 76 - proofreading
//https://thehuxley.com/problem/76
void printa_array(int i, int tam, int numAluno[], double notas[])
{
	if (i < tam)
	{
		printf("%d %.1lf\n", numAluno[i], notas[i]);
		printa_array(i + 1, tam, numAluno, notas);
	}
}


double nota(int i, int tam, char gabarito[], char resp_aluno[])
{
    if(i<tam)
    {
        if(gabarito[i] == resp_aluno[i])
        {
            return 1 + nota(i + 1, tam, gabarito, resp_aluno);
        }
        return nota(i + 1, tam, gabarito, resp_aluno);
    }
    return 0;
}

double aprovados(double notas[], int i, int tam)
{
    if(i < tam)
    {
        if(notas[i] >= 6)
        {
            return 1 + aprovados(notas, i+1, tam);
        }
        return aprovados(notas, i+1, tam);
    }
    return 0;
}

int respostas(int i, int numAluno[], double notas[], char gabarito[])
{
	int n;
	scanf("%d", &n);
	
	if (n == 9999)
		return i;
	
	char resp_aluno[11];
	scanf(" %s", resp_aluno);
	
	numAluno[i] = n;
	notas[i] = nota(0, 10, gabarito, resp_aluno); 
	
	return respostas(i + 1, numAluno, notas, gabarito);
}

int counta_notas (int i, int n, double notas[],  double nota)
{
	if (i < n)
	{
		return (nota == notas[i]) ? 1 + counta_notas (i + 1, n, notas, nota) : counta_notas (i + 1, n, notas, nota);
	}
	return 0;
}

double maior_nota(int i, int tam, double notas[], int nota_aux, int j)
{
	if (i < tam)
	{
		if(notas[i] != notas[j])
		{
			int aux = counta_notas(i, tam, notas, notas[i]);

			if (aux > nota_aux)
			{
				nota_aux = aux;
				j = i;
			}
		}
		return maior_nota(i + 1, tam, notas, nota_aux, j);
	}

	return notas[j];
}

int main() {
    char gabarito[11];
    int alunos[10000];
    double notas[10000];
    scanf(" %s", gabarito);
  
    int tam = respostas(0,alunos,notas, gabarito);
    
    printa_array(0,tam,alunos,notas);
    
    printf("%.1lf%%", ((double)aprovados(notas,0,tam) /tam) * 100);
    
    printf("\n%.1lf\n", maior_nota(0, tam, notas, 0, 0));
    
	return 0;
}


