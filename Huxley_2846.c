#include <stdio.h>

//2846 - Turn presents
//https://thehuxley.com/problem/2846

void entrada( double *tot, int *controca, int i)
{
    if( i < 6)
    {
        double valor;
        int quant;
    
        scanf("%lf %d", &valor, &quant);
        if (quant == 1)
        {
            tot = tot + 0;
        } 
        else
        {
            int troca = quant - 1;
            *controca = *controca + troca;
            *tot = *tot + (troca * valor);
        }
        
        entrada(tot, controca,++i);    
    }
}

int main()
{
    double tot = 0.0;
    int controca = 0;
    printf("Insira a quantidade e valor de cada presente:\n");
    
    entrada(&tot, &controca,0);

    printf("Numero de presentes a serem trocados: %d\n", controca);
    
    printf("%s", (tot < 800) ? "Voce NAO PODERA adquirir o ar condicionado com as trocas\n"
                                : "Voce PODERA adquirir o ar condicionado com as trocas\n");
                                
    return 0;
}
