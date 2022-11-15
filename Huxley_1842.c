#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1842  - Distance between two coordinates
//https://thehuxley.com/problem/1842
int main() {
    
    int i, j;
    int tam, array[4];
    scanf("%d", &tam);
    
    for( i = 0; i < tam; i++)
    {
        for(j = 0; j < 4; j++  )
        {
            scanf("%d", &array[j]);
        }
        
        printf("%.2lf\n", sqrt(((array[2]-array[0])*(array[2]-array[0]))+((array[3] - array[1])*(array[3] - array[1]))));
    }
    
	return 0;
}
