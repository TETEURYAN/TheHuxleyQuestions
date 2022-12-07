#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define lli long long int 

//3442 - Pokemon Battle (Hard Version
//https://thehuxley.com/problem/3442/code-editor/

lli batalha (lli turno, lli dano_clodes,lli vida_bezaliel, lli num_dano)
{
    if (num_dano == turno) return 0;
    
    if ((turno - num_dano) * (dano_clodes + 50 * num_dano) >= vida_bezaliel) return 1;
    
    return batalha (turno, dano_clodes, vida_bezaliel, num_dano + 1);
}
void entradas (int x)
{
    if (x == 0) return;

    int vida_clodes, vida_bezaliel, dano_clodes, dano_bezaliel;
    scanf ("%lld %lld %lld %lld", &vida_clodes, &vida_bezaliel, &dano_clodes, &dano_bezaliel);
    
    int total = batalha(ceil((double) vida_clodes/dano_bezaliel), dano_clodes, vida_bezaliel, 0);

	printf("%s", total ? "Clodes\n" : "Bezaliel\n");
    
	entradas (x - 1);
}
int main()
{
    int num;
    scanf("%d", &num);

    entradas (num);
    return 0;
}