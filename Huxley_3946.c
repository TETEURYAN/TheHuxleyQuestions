#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    char name[21];
    double elenco;
    int qtd;
    int titulo;
    char neymar[4];
    char Fla19[4];
}Person;

void read_nickname(char nickname[], int i) 
{
    char c = getchar();
    if(c == '\n') nickname[i] = '\0';
    else 
    {
        nickname[i] = c;
        read_nickname(nickname, i + 1);
    }   
}

void solve(Person *times, int num, int i)
{
    if(i < num)
    {
        
        int neymar = !(strcmp(times[i].neymar,"sim")) ? 10000 : 0;
        int flamengo = !(strcmp(times[i].Fla19,"sim")) ? 20000 : 0;
        
        times[i].elenco += times[i].titulo*2000 + times[i].qtd*100 + flamengo + neymar;
        solve(times, num, ++i);
    }
    
    else
    {
        //bubble_crescente(0, 0, times, num);
        
        for( int i = 0; i < num; i++)
        {
            printf("%s %.2lf\n", times[i].name, times[i].elenco);
        }
            
    }
    
    
}

void input_struct(int tam, Person a[], int i)
{
    if(i < tam)
    {
        //getchar();
        read_nickname(a[i].name, 0);
        
        scanf("%lf ", &a[i].elenco);
        
        scanf("%d ", &a[i].qtd);
        
        scanf("%d\n", &a[i].titulo);
        
        read_nickname(a[i].neymar, 0);
        
        read_nickname(a[i].Fla19, 0);
        
        printf("Nome: %s\n", a[i].name);

        input_struct(tam, a, ++i);
    }
}

int main() 
{
    int num;
    scanf("%d\n", &num);
    //getchar();
    Person personagem[num];

    input_struct(num, personagem, 0);
    
    solve(personagem, num, 0);
	return 0;
}
