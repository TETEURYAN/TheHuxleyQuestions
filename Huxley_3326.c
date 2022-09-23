#include <stdio.h>
#include <math.h>
//3326 - FUTEBOL DE ROBÔS
int main()
{
	int ano1, ano2, ano3, caso1, caso2, caso3;
	
	scanf("%i%i%i",&ano1,&ano2,&ano3);

    caso1 = (ano1-ano2);

    caso2 = (ano2-ano3);

    caso3 = (ano3-ano1);

    if(ano1 <0  || ano2 < 0 ||  ano3 <0 ){
        printf("esses dados nao valem");
    }
    else{
        if(caso1>0 && caso2<=0){
            printf(":)");
        }
        else if(caso1>0 && caso2>0 && caso1>caso2){
            printf(":)");
        }
        else if(caso1<0 && caso2<0 && caso2 == caso1){
            printf(":)");
        }
        else if(caso1 == caso2 && ano2<ano3){
            printf(":)");    
        }
        else if(caso1 == caso2 && caso2 ==caso3){
            printf(":)");
    }
        else{
            printf(":(");
        }
        return 0; 
    }
}
