#include <stdio.h>


int conta(int indice_zero, int indice_um, int indice_dois, int indice_tres, int limite, int valor){
    if (limite == 0)
    {
        valor += indice_zero;
        return valor;
    }
    else if (limite == 1)
    {
        valor += indice_um;
    } 
    else if (limite == 2)
    {    
        valor += indice_dois;
    } 
    else if (limite == 3)
    {
        valor += indice_tres;
    } 
    else if (limite >= 4)
    {
        valor += 9 * conta(indice_zero, indice_um, indice_dois, indice_tres, limite - 1, valor) + 2 * conta(indice_zero, indice_um, indice_dois, indice_tres, limite - 2, valor) - 5 * conta(indice_zero, indice_um, indice_dois, indice_tres, limite - 3, valor) + conta(indice_zero, indice_um, indice_dois, indice_tres, limite - 4, valor);
    }

   return valor;
}


int main(){
    int indice_zero, 
    indice_um, 
    indice_dois, 
    indice_tres, 
    limite, valor = 0;

    scanf("%d %d %d %d %d", &indice_zero, &indice_um, &indice_dois, &indice_tres, &limite);

    int valor_final = conta(indice_zero, indice_um, indice_dois, indice_tres, limite, valor);
    
    printf("%d", valor_final);
    return 0;
}