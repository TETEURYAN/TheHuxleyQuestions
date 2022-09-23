#include <stdio.h>
#include <math.h>
//1855 - MAIS VELHO E MAIS NOVO
int main()
{
	int idade1, idade2, idade3, idade4, 
    modulo1, modulo2, modulo3, modulo4, modulo5, modulo6;
	
    scanf("%d%d%d%d",&idade1,&idade2,&idade3,&idade4);

    modulo1 = fabs(idade1-idade2);
    modulo2 = fabs(idade1-idade3);
	modulo3 = fabs(idade1-idade4);
    modulo4 = fabs(idade2-idade3);
    modulo5 = fabs(idade2-idade4);
    modulo6 = fabs(idade3-idade4);
    
    if(modulo1>=modulo2 && modulo1>=modulo3 && modulo1>=modulo4 && modulo1>=modulo5 && modulo1>=modulo6){
        printf("%i", modulo1);
    }
    else if(modulo2>=modulo1 && modulo2>=modulo3 && modulo2>=modulo4 && modulo2>=modulo5 && modulo2>=modulo6){
        printf("%i", modulo2);
    }
    else if(modulo3>=modulo1 && modulo3>=modulo2 && modulo3>=modulo4 && modulo3>=modulo5 && modulo3>=modulo6){
        printf("%i", modulo3);
    }
    else if(modulo4>=modulo1 && modulo4>=modulo2 && modulo4>=modulo4 && modulo4>=modulo5 && modulo4>=modulo6){
        printf("%i", modulo4);
    }
    else if(modulo5>=modulo1 && modulo5>=modulo2 && modulo5>=modulo3 && modulo5>=modulo4 && modulo5>=modulo6){
        printf("%i", modulo5);
    }
    else if(modulo6>=modulo1 && modulo6>=modulo2 && modulo6>=modulo3 && modulo6>=modulo4 && modulo6>=modulo5){
        printf("%i", modulo6);
    }

    return 0;

}
