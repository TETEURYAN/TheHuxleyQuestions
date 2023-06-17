#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//3678 - A FESTA DO JAPA

int saque(double garrafa){
	int copo;
	copo = (garrafa*675.0)/45;
	return copo;
}
int main(){
	double A,B,C,D,total1, total2, total3, Fa, Fb, Fc,razao1, razao2, razao3, final1, final2, final3;
	scanf("%lf %lf %lf %lf", &A,&B,&C,&D);	
	
	Fa = saque(A)/D; 
	Fb = B/D; 
	Fc = C/D; 
	razao1 = 4*saque(A);razao2 = 5*B;razao3 = 3*C;
	final1 = razao1/Fa-saque(A), final2 = (razao2/Fb) - B, final3 = razao3/Fc-C;			
	if(D<4){
		return 0;}
		else{
			if (Fa<4 && Fb<5 && Fc<3){
				printf("Partiu Festa do Japa...Japacama\n");}
			else if (Fa>4 && Fb<5 && Fc<3){
				printf("Faltaram %.0lf manjus e %.0lf yakitoris\n", final2, final3);}
			else if (Fa<4 && Fb<5 && Fc>3){
				printf("Faltaram %.0lf saques e %.0lf manjus\n", final1, final2);}
			else if (Fa<4 && Fb>5 && Fc<3){
				printf("Faltaram %.0lf saques e %.0lf yakitoris\n", final1, final3);}
			else if(Fa>4 && Fb>5 && Fc>3){
				printf("Partiu Festa do Japa!");}
			}
	
}
