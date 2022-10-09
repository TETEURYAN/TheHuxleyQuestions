#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2072 - Infinite Wall
int total_moedas(int num, int money, char seta, int x, int y)
{
    char movimento;
    if (num == 0){
        printf("%d\n", money);
        return 0;
    }
    scanf (" %c ", &movimento);

    if(movimento == 'C'){
         y++;
         }
    else if(movimento == 'D'){
         x++;
    }

    if(seta == 'R2' && y < x){
         money ++;
         }
    else if(seta == 'R1' && y > x){
         money ++;
        }
    if(y < x){

     seta = 'R1';
    }
    else if(y > x){
         seta = 'R2';
    }
    return total_moedas(num - 1, money, seta, x, y);
}

int main (void) {
    int num;
    scanf ("%d", &num);

    total_moedas(num, 0,'?', 0, 0);

	return 0;
}
