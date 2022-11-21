#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//526 - Add two large numbers!!
//https://thehuxley.com/problem/526

void digitos (int tam1, int tam2, char num1[], char num2[], int aux)
{	
	if( tam1 < 0 && tam2 < 0)
	{	
		 return;
	}

	int soma = aux;

	if ( tam1 >= 0)
		{
			soma += (num1[tam1] - '0');
		} 	
	if ( tam2 >= 0)
	{
		soma += (num2[tam2] - '0');
	} 

	digitos(--tam1, --tam2, num1, num2, soma / 10);
	printf("%d", soma%10);
}

int main ()
{
	char num1[1000], num2[1000];
    
    scanf("%s",num1);
    scanf("%s",num2);
	
	digitos (strlen(num1)-1, strlen(num2)-1, num1, num2, 0);
	
	return 0;
}
