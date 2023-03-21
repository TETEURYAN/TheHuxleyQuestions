#include <stdio.h>

//3895 - A VIAGEM

double Dsem( double sal, double tarifa, double dikm, double km){
	
	double taxa, salario, valor, valor1;
	
	taxa = (tarifa+(dikm*km))*1.10;
	
	salario = 0.3*sal;
	
	if (taxa>salario){
		valor = taxa-salario;
		printf("Não vai poder viajar.\n");
		printf("%.2lf", valor);
		return valor;
	}
	else if (salario>taxa){
			valor = salario-taxa;
			printf("Vai poder viajar.\n");
			printf("%.2lf\n", taxa);
			printf("%.2lf\n", valor);
			
		}
	
	
}


double Fsem( double sal, double tarifa, double dikm, double km){
	
	double taxa, salario, valor, valor1;
	
	taxa = (tarifa+(dikm*km));
	
	salario = 0.3*sal;
	
	if (taxa>salario){
		valor = taxa-salario;
		printf("Não vai poder viajar.\n");
		printf("%.2lf", valor);
		return valor;
	}
	else if (salario>taxa){
			valor = salario-taxa;
			printf("Vai poder viajar.\n");
			printf("%.2lf\n", taxa);
			printf("%.2lf\n", valor);
			
		}
	
}


int main (){
	double total;
	double SalPedro, Vtarifa, $km, kilometro, week;
	
	scanf("%lf %lf %lf %lf %lf", &SalPedro, &Vtarifa, &$km, &kilometro, &week);
	
	

	
		if(week == 1){
				total = Dsem ( SalPedro, Vtarifa, $km, kilometro);
				
				
				
		}
		else if(week == 0){
			
				total = Fsem ( SalPedro, Vtarifa, $km, kilometro);
		}
	
		return 0;
}
