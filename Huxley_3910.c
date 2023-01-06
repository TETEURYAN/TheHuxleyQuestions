#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    char classe[20];
    int life;
    int damage;
    int exp;
} Monster;

typedef struct 
{
    char classe[20];
    int life;
    int damage;
    int exp;
    int x;
    int y;
} Warrior;

void read_nickname(char nickname[], int i) 
{
    char c = getchar();
    if(c == ' ') nickname[i] = '\0';
    else 
    {
        nickname[i] = c;
        read_nickname(nickname, i + 1);
    }   
}

void input_monstro(Monster a[], int num)
{
    for(int i = 0; i < num; i++)
    {
        scanf("%d ", &a[i].id);
        read_nickname(a[i].classe, 0);
        scanf("%d ", &a[i].life);
        scanf("%d ", &a[i].damage);
        scanf("%d ", &a[i].exp);
        //printf("%s\n", a[i].classe);
        //printf("%d\n", a[i].life);
    }
}

void input_guerreiro(Warrior a)
{
    for(int i = 0; i < 2; i++)
    {
        read_nickname(a.classe, 0);
        scanf(" %d", &a.life);
        scanf(" %d", &a.damage);
        a.exp = 0;
        scanf(" %d", &a.x);
        scanf(" %d", &a.y);
        
        //printf("%d\n", a[i].life);
    }
}

void input_matrix (int i, int linha, int coluna, int matrix[][coluna])
{
	if (i < linha * coluna)
	{
		scanf("%d", &matrix[i / coluna][i % coluna]);
		input_matrix(i + 1, linha, coluna, matrix);
	}
	return;
}

void battle(int vidaPedro, int vidaTulio, int pedroExp, int tulioExp, int atkPedro, int atkTulio, int defeat_pedro, int defeat_tulio, int tam, int tabble[][tam])
{
    
}

void solve(Monster a[], Warrior pedro, Warrior tulio, int tam, int tabble[][tam])
{
    int defeat_pedro = 0; int defeat_tulio = 0;
    int rounds;
    scanf("%d", &rounds);
    
    for(int i = 0; i < rounds; i++)
    {
        int mov_pedro; int mov_tulio;
        scanf("%d %d", &mov_pedro, &mov_tulio);
        
        battle(&pedro.life, &tulio.life, &pedro.exp, &tulio.exp,  pedro.damage, tulio.damage, defeat_pedro, defeat_tulio, tam, tabble);
    }
    
    
}

int main() 
{
    int num_monster;
    scanf("%d\n", &num_monster);
    
    Monster monstro[num_monster];
    input_monstro(monstro, num_monster);
    
    Warrior pedro;
    Warrior tulio;
    input_guerreiro(pedro);
    input_guerreiro(tulio);
    
    int tam;
    scanf("%d", &tam);
    
    int tabble[tam][tam];
    input_matrix(0, tam, tam, tabble);
    
    solve(monstro, pedro, tulio, tam, tabble);
    
	return 0;
}
