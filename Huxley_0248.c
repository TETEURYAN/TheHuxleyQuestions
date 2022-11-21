#include <stdio.h>
#define lli long long int

//248 - Digits product
//https://thehuxley.com/problem/284

lli mult(lli fator_multiplicativo, lli auxiliar)
{
    if (fator_multiplicativo > 0)
    {
      auxiliar *= fator_multiplicativo % 10;
      fator_multiplicativo /= 10;
      return mult(fator_multiplicativo,auxiliar);
    }
    return auxiliar ;
}

lli produto( lli numero, lli aux)
{
    if(mult(aux,1) != numero && aux < 1000000)
    {
        return produto(numero, aux+1);
    }
    
    else
    {
        printf("%Ld\n", (aux != 1000000) ? aux : -1);
    }
    return 0;

}

int main()
{
    lli numero;
    scanf("%Ld", &numero);

    produto(numero,0);

    return 0;
}
