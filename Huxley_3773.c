#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 3773 - Saci's joke
//https://thehuxley.com/problem/3773

void swap (float *x, float *y)
{
	float aux = *x;
	*x = *y;
	*y = aux;
}

void bubble_sort (int i, int j, float array[], int n)
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

int main() {
    
    char nome1[50],nome2[50], nome3[50], nome4[50], nome5[50];
    float notas[6];
    int idade[6];
    
    scanf("%s%f%d", nome1, &notas[0], &idade[0]);
    scanf("%s%f%d", nome2, &notas[1], &idade[1]);
    scanf("%s%f%d", nome3, &notas[2], &idade[2]);
    scanf("%s%f%d", nome4, &notas[3], &idade[3]);
    scanf("%s%f%d", nome5, &notas[4], &idade[4]);
    
   
    bubble_sort(0,0,notas, 5);
    
    printf("%s %.2f %d\n", nome1, notas[0], idade[0]);
    
    printf("%s %.2f %d\n", nome2, notas[1], idade[1]);
    printf("%s %.2f %d\n", nome3, notas[2], idade[2]);
    printf("%s %.2f %d\n", nome4, notas[3], idade[3]);
    printf("%s %.2f %d\n", nome5, notas[4], idade[4]);
	return 0;
}
