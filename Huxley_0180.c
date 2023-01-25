#include <stdio.h>
#include<stdbool.h>

//180 - Elevator

int passou(int entrada, int capacidade, int i, int agora)
{
    if (i > entrada)return false;
    
    else
    {
        int saiu, entrou, nagora;
        scanf("%d%d", &saiu, &entrou);
        nagora = (agora + entrou) - saiu;
        if (agora > capacidade)return true;
        return passou(entrada, capacidade, i+1, nagora);
    }
}
int main()
{
    int entrada, capacidade;
    scanf("%d%d", &entrada, &capacidade);
 
    printf("%s", passou(entrada, capacidade, 1, 0) ? "S\n" : "N\n" );
    return 0;
}
