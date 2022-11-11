#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4105 - Produção de leite

void exec(int day, int limit, int p_kcaj, int p_ordep, double sum_kcaj, double sum_ordep);
int eh_primo(int n, int div);
int eh_coprimo(int n1, int n2, int div );
int sum_digits(int number);
int fatorial(int number);


int main() {
    int days, p_kcaj, p_ordep;


    scanf("%d %d %d", &days, &p_kcaj, &p_ordep);

    exec(1, days, p_kcaj, p_ordep, 0 ,0);

	return 0;
}

void exec(int day, int limit, int p_kcaj, int p_ordep, double sum_kcaj, double sum_ordep){


    if (day > limit){
        if (sum_ordep >= sum_kcaj){
            printf("Ordep Ganhou!\n");
            printf("%.2lf", sum_ordep);
        } else{
            printf("Kcaj Ganhou!\n");
            printf("%.2lf", sum_kcaj);
        }
        return;
    }

    sum_kcaj += p_kcaj;
    sum_ordep += p_ordep;

 

    int eh_dia_primo = eh_primo(day, 2);
    int eh_primo_soma_digitos_fatorial_dia = eh_primo(sum_digits(fatorial(day)), 2);


 
    if (eh_dia_primo == 1){
      
        sum_kcaj += (p_kcaj * 0.05);
    }


    if (eh_primo_soma_digitos_fatorial_dia == 1){
       
        double val = sum_ordep * 0.1;

  
        sum_kcaj += val;
        sum_ordep -= val;
    }

  
    int fatorial_dia = fatorial(day); 
    int soma_digitos_fatorial_dia = sum_digits(fatorial_dia);

    if(p_ordep % soma_digitos_fatorial_dia == 0){
        sum_ordep += 30;
    }

    if (eh_coprimo(p_ordep, day, 2) == 1){
        double val = sum_kcaj * 0.1;

        sum_ordep += val;
        sum_kcaj -= val;
    }



    return exec(day + 1, limit, p_kcaj, p_ordep, sum_kcaj,  sum_ordep);
}

int eh_primo(int n, int div){
    if(n<=1){
        return 0;
    }

    if(n == 2 || n == div){
        return 1;
    }

    if (n % div == 0){
        return 0;
    }

    return eh_primo(n, div + 1);
}

int eh_coprimo(int n1, int n2, int div )
{
  
    if(n1 == 1 || n2 == 1)
    {
        return 1;
    }

  
    if(n1 % div == 0 && n2 % div == 0)
    {
        return 0;
    }

 
    if(n1 == div || n2 == div){
        return 1;
    }

    return eh_coprimo(n1, n2, div + 1);
}


int sum_digits(int number){
    if(number < 10) 
    {
        return number;
    }
    
    int digit = number % 10;
    int next_number = number / 10;

    return digit + sum_digits(next_number); 
}

int fatorial(int number){
    if (number <= 1){
        return 1;
    }

    return number * fatorial(number - 1);
}
