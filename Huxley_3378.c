#include <stdio.h>

// 3778 - DUELO CONDICIONAL

int main() {
    
    double Nv1,Dano1,Nv2,Vida2;

    scanf("%lf %lf %lf %lf", &Nv1,&Dano1,&Nv2,&Vida2);

    if (Nv1<1 || Nv2<1){
        printf("Nivel abaixo");
		return 0;
		}          
          
    
        else if(Nv1>20 || Nv2>20){
            printf("Nivel acima");
            return 0;
        }
        
    else{

                    if(Nv1>=1 && Nv1<=5){
                        Dano1 = Dano1*1.20;
                    }
                    if(Nv1>=6 && Nv1<=10){
                        Dano1 = Dano1*1.50;
                    }
                    if(Nv1>=11 && Nv1<=15){
                        Dano1 = Dano1*1.80;
                    }
                    if(Nv1>=16 && Nv1<=20){
                        Dano1 = Dano1*2;
                    }

                    if(Nv2>=1 && Nv2<=5){
                        Vida2 =  Vida2*1.20;
                    }
                    if(Nv2>=6 && Nv2<=10){
                        Vida2 =  Vida2*1.50;
                    }
                    if(Nv2>=11 && Nv2<=15){
                        Vida2 =  Vida2*1.80;
                    }
                    if(Nv2>=16 && Nv2<=20){
                        Vida2 =  Vida2*2;
                    }
                    
                        if(Dano1 >= Vida2){
                            printf("Personagem 1 venceu\n");
                            printf("Dano causado: %.2lf\n", Dano1);
                        }

                        else{
                            printf("Personagem 2 venceu\n");
                            Vida2 = Vida2 - Dano1;
                            printf("Vida restante: %.2lf\n", Vida2);
                        }

                }      


	return 0;
}
