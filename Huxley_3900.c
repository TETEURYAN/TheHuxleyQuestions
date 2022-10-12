#include <stdio.h>
#include <stdlib.h>
//3900 - XQ472E-1712 
void loop(int num){

	printf("%s", (num%2) ? "-" : ".");
	if(num<10){
		return;
}
	loop(num/10);
}

void entra(int entrada){
	int num;
	
	if(entrada == 0) return;
	if(entrada<10) printf("\n");
	scanf("%d", &num);
	loop(num);
	
	entra(entrada-1);
}

int main() {
 
  
   entra(10);
   return 0;
}
