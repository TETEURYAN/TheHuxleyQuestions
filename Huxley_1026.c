#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//1026 - banking operation
//https://www.thehuxley.com/problem/1026?locale=pt_BR

int main() {
    
    int num, i;
    double valor_cred = 0, valor_deb = 0, valor;
    
    double credito[50];
    double debito[50];
    
    for(i = 0;;i++)
    {
        
        scanf("%d", &num);
        
        if(num == -1)break;
        
        else
        {
            scanf("%lf", &valor);
            credito[i] = (num == 1) ? valor : 0;
            debito[i] = (num == 0) ? valor : 0;
        
            valor_cred +=credito[i];
            valor_deb += debito[i];
        }
        
    }
    
    printf("Creditos: R$ %.2lf\n", valor_cred);
    printf("Debitos: R$ %.2lf\n", valor_deb);
    printf("Saldo: R$ %.2lf\n", valor_cred - valor_deb);
    
	return 0;
}
