#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 3005 - TORCEDOR FANÁTICO

double Dcasa( double casa, double clima, double pessoa, double lesao, double entro){
	
	double total;
	total  = 100;
	
	// CONTA DO CLIMA
	if (clima == 1)
	{
		total += 33.21;	
	}
	else if(clima == 2)
	{
		total +=10.51;
	}
	else if(clima == 3)
	{
		total -= 20.70;
	}
	
	// CONTA DO PUBLICO
	
	double bilheteria;
	if(pessoa>40000)
	{
		bilheteria = pessoa * 0.0008;
		total += bilheteria;
	}
	else
	{
		bilheteria = pessoa * 0.0008;
		total -= bilheteria;
	}
	
	// CONTA DOS LESIONADOS
	double PernaDePau;
	PernaDePau = 2.70*lesao;
	total -= PernaDePau;
	
	// CONTA DO ENTROSAMENTO
	double amizade;
	if(entro > 0)
	{
		amizade = entro *2.70;
		total += amizade;
	}
	else if(amizade < 0)
	{
		amizade = entro*1.80;
		total -= amizade;
	}
	else 
	{
		total += 0;
	}
	
	if(total>=100)
	{ 
	return 100;
	}
	else{
		return total;
	}
}

double Fcasa(double casa, double clima, double pessoa, double lesao, double entro){
		double total;
	total  = 100;
	
	// CONTA DO CLIMA
	if (clima == 1)
	{
		total -= 10.87;	
	}
	else if(clima == 2)
	{
		total =0;
		return total;
	
	}
	else if(clima == 3)
	{		
		total =0;
		return total;
	}
	
	// CONTA DO PUBLICO
	
	double bilheteriaF;
	if(pessoa>45000)
	{
		bilheteriaF = pessoa * 0.0003;
		total -= bilheteriaF;
	}
	else
	{
		bilheteriaF = pessoa * 0.0001;
		total -= bilheteriaF;
	}
	
	// CONTA DOS LESIONADOS
	double PernaDePauF;
	PernaDePauF = 2.70*lesao;
	total -= PernaDePauF;
	
	// CONTA DO ENTROSAMENTO
	double amizadeF;
	if(entro > 0)
	{
		amizadeF = entro *5.20;
		total += amizadeF;
	}
	else if(amizadeF < 0)
	{
		amizadeF = entro*1.50;
		total -= amizadeF;
	}
	else 
	{
		total += 0;
	}
	
	if(total>=100)
	{ 
	return 100;
	}
	else{
		return total;
	}
}

int main() {
	
	double mando, temmpo, pessoas, lesionados, amizafes;
	
	scanf("%lf %lf %lf %lf %lf",  &mando, &temmpo, &pessoas, &lesionados, &amizafes);
	double total2;
	
	if (mando == 1)
	{
		total2 = Dcasa( mando, temmpo, pessoas, lesionados, amizafes);
	}
	else if ( mando == 0)
	{
		total2 = Fcasa (mando, temmpo, pessoas, lesionados, amizafes);
	}
		
	 printf("A chance de vitoria do flamengo e de %.2lf", total2);	    
    return 0;
 
}
