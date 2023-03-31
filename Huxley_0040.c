#include <stdio.h>

int main()
{
	float valor, final;
	
	
	scanf("%f", &valor);
	final = valor + valor*0.1;

	printf("%.2f", final);
	return 0;	
}
