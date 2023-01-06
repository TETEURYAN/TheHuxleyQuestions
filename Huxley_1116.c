#include <stdio.h>
#include <stdbool.h>

//1116 - Full date
//https://thehuxley.com/problem/1116

void printday(int m); void printmonth(int m); void printyear(int n, int i);bool validate(int dia, int mes, int ano); int main();

int main() 
{
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    if(validate(dia,mes,ano))
    {   
        printday(dia);
        printmonth(mes);
        printyear(ano, 0);
    }
    else printf("data invalida\n");
    
	return 0;
}

char meses[12][20] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
char prefixos[11][20] = {"", "c", "duz", "trez", "quatroc", "quinh", "seisc", "setec", "oitoc", "novec"};
char dezMais[10][20] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
char tens[10][20] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
char digitos[10][20] = {"um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};

void printday(int m)
{
    if(m < 10) printf("%s", digitos[m-1]);
    if(m >= 10 && m < 20) printf("%s", dezMais[ m%10]);
    if(m> 19 && !(m%10)) printf("%s", tens[m/10 - 2]);
    if(m > 20 && m%10 != 0) printf("%s e %s", tens[m/10 - 2], digitos[(m%10) - 1]);
}

void printmonth(int m)
{
  printf(" de %s de ", meses[m - 1]);
}

void printyear(int n, int i)
{
  if (n >= 1000)
  {
    if (n >= 2000) printyear(n / 1000, 0);
    printf("mil ");
    printyear(n % 1000, 1);
  }
  else if (n >= 100)
  {
    if(n == 100) printf("e cem");
    else
    {
        if(n == 900) printf("e ");
        printf("%sento%s", prefixos[n / 100], n <= 199 ? " " : "s ");
        printyear(n % 100, 1);
    }
  }
  else if (n >= 10)
  {

    if (n <= 19) printf("e %s ", dezMais[n % 10 ]);
    else if( n > 19)
    {
        if(n < 10) printf("e %s", digitos[n-1]);
        if(n >= 10 && n < 20) printf("e %s", dezMais[ n%10]);
        if(n> 19 && !(n%10)) printf("e %s", tens[n/10 - 2]);
        if(n >= 20 && (n%10)!= 0) printf("e %s e %s", tens[n/10 - 2], digitos[(n%10)-1]);
    }
  }
  else if (n < 10 && n && i)
  {
    printf("e %s ", digitos[n-1]);
  }
  
  else if (n < 10 && !i)
  {
    printf("%s ", digitos[n-1]);
  }
}

void printMonth(int m)
{
  printf("%s", meses[m - 1]);
}

bool validate(int dia, int mes, int ano)
{
    if(ano <1900 || ano > 2100 || mes < 1 || mes > 12 || dia < 1 || dia > 31) return false;
    if((mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 31) return false;
    
    else return true;
}
