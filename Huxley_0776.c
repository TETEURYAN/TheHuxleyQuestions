#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//776 - Períodos da História Numéricos
//https://thehuxley.com/problem/776

void swap (int *x, int *y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}

void bubble_sort (int i, int j, int array[], int n)
{
	int aux;
	if (i < n)
	{
		if (j < n)
		{
			if (n != j + 1)
				if (array[j] > array[j + 1])
					swap(&array[j], &array[j + 1]);
				
			bubble_sort(i, j + 1, array, n);
		}
		else
		{
			bubble_sort(i, i, array, n - 1);
		}
	}
}

int printa_array(int array[], int i, int tam){
    if(i == tam) return 0;
    printf("%d ", array[i]);
    printa_array(array, i+1, tam);
}


int main() 
{
    int ordem[3];
    char tempo[2];
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        scanf("%d ", &ordem[i]);
        //printf("%d ", ordem[i]);
        scanf("%s\n", tempo);
        
        if(!strcmp(tempo,"aC"))
        {
            ordem[i] *= -1;
        }
        
    }
    
    bubble_sort(0,0,ordem,3);


    printf("%d", (ordem[2] <= 476) ? 2 : (ordem[2] <= 1789) ? 3 : 4);

    
	return 0;
}