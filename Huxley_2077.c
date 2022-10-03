#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int triangular(int n, int i){
    if(i*(i+1)*(i+2) < n)
         return triangular(n, i+1);
        if(i*(i+1)*(i+2) > n || n == 0 || n<0){
             printf("Falso");
    }    
        if (i*(i+1)*(i+2) == n)
             printf("%d * %d * %d = %d\nVerdadeiro", i, i+1, i+2,n);return 0;
    
}


int main() {
  int n, i = 1;
    scanf("%i", &n);
    triangular(n,i);
  return 0;
}
