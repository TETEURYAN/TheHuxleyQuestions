#include<stdio.h>

int mdc(int n1,int n2){
    if(n2==0) return n1;
    return mdc(n2,n1%n2);
}

int funcPrimo(int a, int i)
{
  if(a < 2) return 0;
  if (a == 2) {
    return 1;
  }
  if (a % i == 0) return 0;
  if (i * i > a)
    return 1;
  return funcPrimo(a,i+1);
}


int partida(int rodada, int k, int i){
	int primeiro, habilidade_will,atk_will, vd_will, habilidade_gabriel, atk_gabriel, vd_gabriel;
	
	if(rodada == 0){
        printf("Will venceu %d rodadas\nGabriel venceu %d rodadas", k, i); 
        return 0;
    }
	else{
		scanf("%i%i%i%i%i%i%i", &primeiro, &habilidade_will, &atk_will, &vd_will, &habilidade_gabriel, &atk_gabriel, &vd_gabriel);
		
			//habilidade do will
			if(habilidade_will == 1){
				atk_will *= (funcPrimo(rodada,2)) ? 2 : 1;
			}
			if(habilidade_will == 2){
				atk_will += (mdc(vd_will,vd_gabriel) == 1) ? 25 : 0;
			}
			if(habilidade_will == 3){
				atk_will += ((funcPrimo(atk_will,2) || funcPrimo(vd_will,2))) ? 10 : 0;	
			}
			//habilidade do gabriel
			if(habilidade_gabriel == 1){
				atk_gabriel *= (funcPrimo(rodada,2)) ? 2 : 1;
			}
			if(habilidade_gabriel == 2){
				atk_gabriel += (mdc(vd_gabriel,vd_will) == 1) ? 25 : 0;
			}
			if(habilidade_gabriel == 3){
				atk_gabriel += ((funcPrimo(atk_gabriel,2) || funcPrimo(vd_gabriel,2))) ? 10 : 0;	
			}
			//duelo sendo k = will e i = Gabriel
			 if(primeiro == 1){
			 	if((vd_gabriel/atk_will)<(vd_will/atk_gabriel)){
			 		k++;
				 }
				 else{
				 	i++;
				 }
			 }
			 
			 if(primeiro == 2){
			 	if((vd_will/atk_gabriel)<(vd_gabriel/atk_will)){
			 		i++;
				 }
				 else{
				 	k++;
				 }
			 }
			 
		
	}
	return partida(rodada-1, k, i);
}

int main(){
	int rodadas, j, i;
	scanf("%i", &rodadas);
	
	partida(rodadas, 0, 0);
	   
    return 0;
}
