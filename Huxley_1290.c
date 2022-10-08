#include <stdio.h>
// 1290 - RICKCEPTION
int serie(int primeira_camada, int sonho, int i){
	if (sonho == i)
	{
		printf("%d\n", primeira_camada);
	}
	
	else{
		
		i++;
		int soma = primeira_camada + 3;
		if (i == sonho ){
			printf("%d\n", soma);
		}
		
		else{ 
		    
			i++;
			int resto = (soma%5)+soma;
			
			if (i == resto){
				printf("%d\n", resto);
			}
			else{
				serie(resto, sonho, i);}
		 }
	}
}

int main ()
{
	int primeira_camada, sonho;
	
	scanf("%d%d", &primeira_camada, &sonho);

	serie(primeira_camada, sonho, 0);

	return 0;
}
