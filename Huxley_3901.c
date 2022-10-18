#include<stdio.h>

//3901 - Armague 2

int mdc(int n1,int n2)
{
    if(n2==0) return n1;
    return mdc(n2,n1%n2);
}

int funcPrimo(int a, int i)
{
  if(a < 2) return 0;
  if (a == 2) return 1;
  if (a % i == 0) return 0;
  if (i * i > a) return 1;
  return funcPrimo(a,i+1);
}

int habilidade (int habilidade, int atk1, int vd1, int vd2, int round) 
{
    if (habilidade == 1) return atk1 *= (funcPrimo(round, round - 2) ? 2 : 1);
    if (habilidade == 2) return atk1 += (mdc(vd1, vd2) ? 25 : 0);
    if (habilidade == 3) return atk1 += ((funcPrimo(vd1, vd1 - 2) || funcPrimo(atk1, atk1 -2)) ? 10 : 0);
}

int confronto (int habilidade1,int atk1,int vd1,int habilidade2,int atk2,int vd2, int round) {
    atk1 = habilidade(habilidade1, atk1, vd1, vd2, round);
    atk2 = habilidade(habilidade2, atk2, vd2, vd1, round);
    vd2 -= atk1; vd1 -= atk2;

    if (vd2 <= 0) return 1;
    if (vd1 <= 0) return 0;
    if (habilidade1 == 1) confronto(habilidade1, atk1 / 2, vd1, habilidade2, atk2, vd2, round + 1);
    else if (habilidade2 == 1)  confronto(habilidade1, atk1, vd1, habilidade2, atk2 / 2, vd2, round + 1);
    else confronto(habilidade1, atk1, vd1, habilidade2, atk2, vd2, round + 1);
    
}

int partida(int rodada, int k, int i){
	int primeiro, habilidade_will,atk_will, vd_will, habilidade_gabriel, atk_gabriel, vd_gabriel;
	
	if(rodada == 0){
        printf("Will venceu %d rodadas\nGabriel venceu %d rodadas", k, i); 
        return 0;
    }
	else{
		scanf("%i%i%i%i%i%i%i", &primeiro, &habilidade_will, &atk_will, &vd_will, &habilidade_gabriel, &atk_gabriel, &vd_gabriel);
        	
			//duelo sendo k = will e i = Gabriel e vice versa
			 if(primeiro == 1) confronto(habilidade_will,atk_will, vd_will, habilidade_gabriel, atk_gabriel, vd_gabriel,1) ? k++ : i++; 
			 if(primeiro == 2) !confronto(habilidade_gabriel,atk_gabriel, vd_gabriel, habilidade_will, atk_will, vd_will,1) ? k++ : i++;	
	}
	return partida(rodada-1, k, i);
}

int main(){
	int rodadas, j, i;
	scanf("%i", &rodadas);
	
	partida(rodadas, 0, 0);
	   
    return 0;
}
