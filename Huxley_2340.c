#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2340 - Add 1 or 2
int par(int num){
    
  if(num < 10){
    return num;
  }
  else{
    par(num/10);
  }
}

int main() {
    int num;
    scanf("%i", &num);
    par(num);
    if(par(num)%2 == 0){
        printf("%i", num + 2);}
    else{
        printf("%i", num + 1);
    }    
    
	return 0;
}
