#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2172 - Run of the moles
//https://thehuxley.com/problem/2172
int total(int qtd, int pata)
{
    if (pata > qtd){
        return 0;
    }
    else{
        int tunel;
        scanf("%d", &tunel);
        if (tunel == -1)
        {
            return (pata * 2) + total(qtd, pata+1);
        }
        else
        {
            return total(qtd, pata+1);
        }
    }
}
int main()
{
    int qtd;
    scanf("%d", &qtd);
    printf("%d\n", total(qtd, 1));
    return 0;
} 
