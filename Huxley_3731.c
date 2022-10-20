#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3731 - Dorian's library

int proxprimo(int x, int y) 
{
    if(x < 2 ||x % y == 0) x++;
    else if(x == 2 || y*y > x ) return x;
    return proxprimo(x, y+1);
}

int somadigito(int num, int soma){
    if(num==0)return soma;
    else soma += num%10;
    somadigito(num/10,soma);
}

int somamultiplos( int num1, int i, int soma)
{
    if(i == num1) return soma;
    else if(i % 6 == 0) soma+= i;
    somamultiplos(num1, i+1, soma);
}

int primeiro_numero(int num1)
{
    num1 = (num1 + proxprimo(num1,2))/somadigito(num1,0); return num1;
}

int segundo_numero(int num1, int num2)
{
    num2 = abs(somamultiplos(num1,0,0) - num2); return num2;
}
 int entrada( )
{
    int num1, num2;
    scanf("%i%i", &num1, &num2);
    if(num1 == 0 && num2 == 0) return 0;
    else{
        printf("%i - %i\n", primeiro_numero(num1), segundo_numero(num1,num2));
    }    
     entrada();
}

void main(){
	
	entrada();
}
