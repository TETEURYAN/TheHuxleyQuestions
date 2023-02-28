#include <stdio.h>
#include <math.h>

int Fatorial (int n) {
	if (n == 0) return 1;
	else return (n * Fatorial(n - 1));
}

int main() 
{
    int soma = 0;
    for(int i = 0; i < 3; i++)
    {
        int num;
        scanf("%d ", &num);
        soma+= Fatorial(num);
    }
    
    printf("%d\n", soma);
	return 0;
}
