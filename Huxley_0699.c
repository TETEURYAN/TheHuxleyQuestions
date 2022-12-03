#include <stdio.h>

int main(){
	int ano,periodo;
	
	scanf("%d",&ano);
	scanf("%d",&periodo);
	
	printf("%d %d %d",ano+periodo,ano+2*periodo,ano+3*periodo);
	
	return 0;
}