#include<stdio.h>
#include<stdbool.h>
//3901 - Armague 2

bool mdc (int vidaA, int vidaB) {
    if (vidaA % vidaB == 0) {
        if (vidaB == 1) return true;
        else return false;
    }
    mdc(vidaB, vidaA % vidaB);
}

bool funcPrimo (int nTeste, int divisor) {
    if (nTeste == 2 || divisor == 1) return true;
    else if (nTeste % 2 == 0 || nTeste % divisor == 0 || nTeste < 2) return false;

    funcPrimo(nTeste, divisor - 2);
}

int habilidade (int habilidade, int atk1, int vd1, int vd2, int round) 
{
    if(habilidade == 1){
        if(funcPrimo(round, round-2)) atk1 *= 2;    
    }
    if(habilidade == 2){
        if(mdc(vd1, vd2)) atk1 += 25;
    }
    if(habilidade == 3){
        if(funcPrimo(vd1, vd1-2)) atk1 += 10;
        else if(funcPrimo(atk1, atk1 - 2)) atk1 += 10;
    }
    return atk1;
}

bool confronto (int habilidade1,int atk1,int vd1,int habilidade2,int atk2,int vd2, int round) {
    atk1 = habilidade(habilidade1, atk1, vd1, vd2, round);
    vd2 -= atk1; 

    if (vd2 <= 0) return true;
    atk2 = habilidade(habilidade2, atk2, vd2, vd1, round);
    vd1 -= atk2;

    if (vd1 <= 0) return false;
    if (habilidade1 == 1 && funcPrimo(round, round-2)) atk1 /= 2;
    if (habilidade2 == 1 && funcPrimo(round, round-2)) atk2 /= 2;
    
    confronto(habilidade1, atk1, vd1, habilidade2, atk2, vd2, round + 1);
}

int partida(int rodada, int Pts_will, int Pts_gabriel){
	int primeiro, habilidade_will,atk_will, vd_will, habilidade_gabriel, atk_gabriel, vd_gabriel;
	
	if(rodada == 0){
        printf("Will ganhou %d rodadas\nGabriel ganhou %d rodadas", Pts_will, Pts_gabriel); 
        return 0;
    }
	else{
		scanf("%i%i%i%i%i%i%i", &primeiro, &habilidade_will, &atk_will, &vd_will, &habilidade_gabriel, &atk_gabriel, &vd_gabriel);
        	
			 if(primeiro == 1) confronto(habilidade_will,atk_will, vd_will, habilidade_gabriel, atk_gabriel, vd_gabriel,1) ? Pts_will++ : Pts_gabriel++; 
			 if(primeiro == 2) !confronto(habilidade_gabriel,atk_gabriel, vd_gabriel, habilidade_will, atk_will, vd_will,1) ? Pts_will++ : Pts_gabriel++;	
	}
	partida(rodada-1, Pts_will, Pts_gabriel);
}

int main(){
	int rodadas;
	scanf("%i", &rodadas);
	
	partida(rodadas, 0, 0);
	   
    return 0;
}
