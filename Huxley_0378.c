#include <stdio.h>

//378 - world cup
//https://www.thehuxley.com/problem/378

int main(){
  int a1, b1, c1, d1, e1, f1, t1;
  
  scanf ("%i %i %i %i %i %i",&a1,&b1,&c1,&d1,&e1,&f1);
  
  t1 = a1+b1+c1+d1+e1+f1;
  
  if (t1>100){
    printf("Classificado");}
  else {
    printf("Eliminado");}
    
return 0;}
