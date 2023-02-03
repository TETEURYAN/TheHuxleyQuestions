#include <stdio.h>

//198 - stairs
//https://thehuxley.com/problem/198

void entrada( int pessoas, int tempo, int anterior, int tempoligada)
{
    if(pessoas > 0)
    {
        anterior = tempo;
        scanf("%i", &tempo);
        if (tempo - anterior > 10 || anterior == 0) tempoligada += 10;
        else tempoligada += tempo - anterior;
        entrada(pessoas-1, tempo, anterior, tempoligada);
    }
    else printf("%i\n", tempoligada); return;
}

int main()
{
  int pessoas;
  scanf("%i", &pessoas);
  
  entrada(pessoas,0,0,0);
  
  return 0;
}
