#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int entrada()
{
    int n1;
    while(scanf("%d", &n1) && n1 != 0)
        printf("%s",(n1<0) ? "Você ainda não nasceu." : (n1<16) ? "Você não pode votar.\n" : (n1>=18 && n1<=70) ? "Vocé tem a obrigatoriedade de votar." : "Na sua idade, o voto é opcional.\n");
}

int main() 
{
    entrada();
	return 0;
}
