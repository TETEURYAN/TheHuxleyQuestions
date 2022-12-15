#include <stdio.h>

//203 - Pulo do Sapo
//https://thehuxley.com/problem/203

void procuratras(int p[], int sap, int sal, int tam)
{
    if (tam == 0) return;
    if (sap == tam-1)
    {
        p[tam-1] = 1;
        sap = sap - sal;    
    }
    procuratras(p, sap, sal, tam-1);
}

void procurafrente(int p[], int sap, int sal, int i, int tam)
{
  
    if (sal < 0) sal = sal * -1;
    
   
    if(sap == i)
    {
        p[i] = 1;
        sap = sap + sal;
    }
    procurafrente(p, sap, sal, i+1, tam);
}

void quantidade(int pedras[], int posinic[], int saltos[], int i, int tams, int tamp)
{
    if (i == tams)return;
    int sap = (posinic[i]-1);
    int sal = saltos[i];
    
    procuratras(pedras, sap, sal, tamp);
    quantidade(pedras, posinic, saltos, i+1, tams, tamp);
}

void iniciar_pedras(int a[], int i, int tam)
{
    if (i == tam) return;
    a[i] = 0;
    iniciar_pedras(a, i+1, tam);
}

void print_casos(int a[], int i, int tam)
{
    if (i == tam) return;
    printf("%d\n", a[i]);
    print_casos(a, i+1, tam);
}

void input_array(int a[], int b[], int i, int tam)
{
    if (i == tam) return;
    
    scanf("%d%d", &a[i], &b[i]);
    input_array(a, b, i+1, tam);
}

int main()
{
    int paredes, saposnum; 
    scanf("%d%d", &paredes, &saposnum);
    
    int pedras[paredes], sapos[saposnum], saltos[saposnum];
    
    iniciar_pedras(pedras, 0, paredes);
    
    input_array(sapos, saltos, 0, saposnum);

    quantidade(pedras, sapos, saltos, 0, saposnum, paredes);
    print_casos(pedras, 0, paredes);   
    
    return 0;
}
