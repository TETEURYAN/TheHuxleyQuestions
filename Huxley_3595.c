#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 3595 - Password
//https://www.thehuxley.com/problem/3595
int main() {
    int num, resto;
    int i = 0;
    scanf("%i", &num);
    
   while(num>0)
   {
       resto = num%10;
       if(resto != 0 ){
       i++;
       }
       num /= 10;
       
   }
    printf("%s", (i==4) ? "Pode" : "Nao pode");
    
	return 0;
}
