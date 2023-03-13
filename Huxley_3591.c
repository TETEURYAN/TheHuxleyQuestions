#include <stdio.h>
#include <string.h>

//3591 - VOGAL OU CONSOANTE

int main(){
	char Consoante;
	
	scanf("%c", &Consoante);
	
	if(Consoante == 'A' || Consoante == 'a' || Consoante == 'E' || Consoante == 'e' || Consoante == 'I' || Consoante == 'i' || Consoante == 'O' || Consoante == 'o' || Consoante == 'U' || Consoante == 'u'){
		printf("A letra %c eh uma vogal", Consoante);
	}
	else if (Consoante == 'B' || Consoante == 'b' ||Consoante == 'C' ||Consoante == 'c' ||Consoante == 'D' || Consoante == 'd' ||Consoante == 'F' ||Consoante == 'F' ||Consoante == 'G' || Consoante == 'g' ||Consoante == 'J' ||Consoante == 'j' ||Consoante == 'K' || Consoante == 'k' ||Consoante == 'L' || Consoante == 'l' ||Consoante == 'M' ||Consoante == 'm' ||Consoante == 'N' || Consoante == 'n' ||Consoante == 'P' ||Consoante == 'p' ||Consoante == 'Q' || Consoante == 'q' ||Consoante == 'R' ||Consoante == 'r' ||Consoante == 'S' || Consoante == 's' ||Consoante == 'T' || Consoante == 't' ||Consoante == 'V' ||Consoante == 'v' ||Consoante == 'W' || Consoante == 'w' ||Consoante == 'X' || Consoante == 'x' ||Consoante == 'Z' ||Consoante == 'z'){
		printf("A letra %c eh uma consoante", Consoante);
	}
	else{
		printf("O caractere %c nao eh nem consoante nem vogal", Consoante);
	}
}
	
