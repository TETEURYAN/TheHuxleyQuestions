#include <stdio.h>
#include <stdbool.h>

void input_matrix (int i, int linha, int coluna, double matrix[][coluna])
{
    if (i < linha * coluna)
    {
        scanf("%lf", &matrix[i / coluna][i % coluna]);
        input_matrix(i + 1, linha, coluna, matrix);
    }
    return;
}

bool vencedorDaRodada (double ataque1, double vida1, double ataque2, double vida2) {
    vida2 -= ataque1;
    vida1 -= ataque2; 
    
    if (vida2 <= 0) return true;
    else if (vida1 <= 0) return false;
    else if (vida1 != vida2) return vida1 > vida2 ? true : false;
    else return ataque1 > ataque2 ? true : false;
}

double funcaoAtaque (int classe1, double ataque, int classe2) {
	if (classe1 == 3 && classe2 == 2) 	return ataque * 1.25;
	else if (classe1 == 2 && classe2 == 1) return ataque * 1.15;
	else return ataque;
}

double funcaoVida (int classe1, double vida, int classe2) {
	if (classe1 == 1 && classe2 == 3) return vida * 1.3;
	if (classe1 == 2 && classe2 == 1) return vida * 1.15;
	else return vida;
}
	
int funcaoVencedor (double ataque1, double vida1, double ataque2, double vida2) {
	if (vida2 < vida1) return !(vencedorDaRodada (ataque2, vida2, ataque1, vida1));
	else return vencedorDaRodada (ataque1, vida1, ataque2, vida2);
}

void batalha(double atributo[][3], int *rodada1, int *rodada2, int *rodada3)
{
    int classePedro1, classePedro2, classePedro3, classeTulio1, classeTulio2, classeTulio3;
        
    double ataquePedro1, ataquePedro2, ataquePedro3, ataqueTulio1, ataqueTulio2, ataqueTulio3;
    double vidaPedro1, vidaPedro2, vidaPedro3, vidaTulio1, vidaTulio2, vidaTulio3;
    
    ataquePedro1 = funcaoAtaque (atributo[0][0], atributo[0][1], atributo[3][0]);ataquePedro2 = funcaoAtaque (atributo[1][0], atributo[1][1], atributo[4][0]);ataquePedro3 = funcaoAtaque (atributo[2][0], atributo[2][1], atributo[5][0]);
	vidaPedro1 = funcaoVida (atributo[0][0], atributo[0][2], atributo[3][0]);vidaPedro2 = funcaoVida (atributo[1][0], atributo[1][2], atributo[4][0]);vidaPedro3 = funcaoVida (atributo[2][0], atributo[2][2], atributo[5][0]);
	ataqueTulio1 = funcaoAtaque (atributo[3][0], atributo[3][1], atributo[0][0]);ataqueTulio2 = funcaoAtaque (atributo[4][0], atributo[4][1], atributo[1][0]);ataqueTulio3 = funcaoAtaque (atributo[5][0], atributo[5][1], atributo[2][0]);
	vidaTulio1 = funcaoVida (atributo[3][0], atributo[3][2], atributo[0][0]);vidaTulio2 = funcaoVida (atributo[4][0], atributo[4][2], atributo[1][0]);vidaTulio3 = funcaoVida (atributo[5][0], atributo[5][2], atributo[2][0]);
    	
    printf ("Rodada1: %s\n", (*rodada1 = funcaoVencedor (ataquePedro1, vidaPedro1, ataqueTulio1, vidaTulio1)) ? "Pedro" : "Tulio");	
	printf ("Rodada2: %s\n", (*rodada2 = funcaoVencedor (ataquePedro2, vidaPedro2, ataqueTulio2, vidaTulio2)) ? "Pedro" : "Tulio");	
	printf ("Rodada3: %s\n", (*rodada3 = funcaoVencedor (ataquePedro3, vidaPedro3, ataqueTulio3, vidaTulio3)) ? "Pedro" : "Tulio");
}
int main () {
    int rodada1 = 0, rodada2 = 0, rodada3 = 0;
    
    double atributo[6][3]; input_matrix(0,6,3,atributo);
    
    batalha(atributo, &rodada1, &rodada2, &rodada3);
    
	printf ("%s vitorioso\n", (rodada1 + rodada2 + rodada3) > 1 ? "Pedro" : "Tulio");
	
	return 0;
}
