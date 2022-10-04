#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//833 - PALINDROMO SIMPLES
int main() {
    
    char a,b,c,d,e;
    
    scanf("%s%s%s%s%s", &a,&b,&c,&d,&e);
    
     if(a==e && b==d||a==b && a==c && d==e||b==c && c==d && a==e|| d==e && e==c && a==b|| a==b && a==d && c==e||a==c && a==d && b==e||e==d && e==c && b==a||d==c && d==b||a==c && b==d && (a==e||b==e)|| b==c && d==a &&(a==e||b==e)|| a==e && b==c || a==e && c==d||a==d && b==e){
        printf("sim"); 
    }
    else{
        printf("nao");
    }
	return 0;
}
