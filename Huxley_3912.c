#include <stdio.h>

// 3912 - The Big Duel
//https://thehuxley.com/problem/3912

int CheckWinner (int size, char game[][size])
{
    char winner;

    for (int i = 0; i < size; i++) 
    {
        if (game[i][0] == game[i][1] && game[i][0] == game[i][2]) 
        {
            if (game[i][0] != '-') winner = game[i][0];
        }
    }

    for (int i = 0; i < size; i++) { // vitoria vertical
        if (game[0][i] == game[1][i] && game[0][i] == game[2][i])
        {
            if (game[0][i] != '-') winner = game[0][i];
        }
    }

    if (game [0][0] == game[1][1] && game[0][0] == game[2][2]) 
    {
        if(game[1][1] != '-') winner = game[1][1];
    }
    if (game [0][2] == game[1][1] && game[0][2] == game[2][0]) 
    {
        if(game[1][1] != '-') winner = game[1][1];
    }
    
    if (winner == 'X') return 1;
    else if (winner == 'O') return 2;
    else return 0;
}

void add_table(int i, char matrix[3][3], char simbolo)
{
    if( i < 9)
    {
        matrix[i / 3][i % 3] = simbolo;
        add_table(++i, matrix,'-');
    }
    return;
}
void print_matrix (int line, int column, int size, char array[][size])
{
	
	for( line = 0; line < size; line++)
	{
		for( column = 0; column < size; column++)
		{
			printf("%c", array[line ][column]);
			if(column == size-1) printf("\n");
		}
		column = 0;
	}
    return;
}

void putSymbol (int size, char game[][size], char symbol, int line, int column) {
    game[line][column] = symbol;
}

int draw(char tab[3][3])
{
    for(int i=0; i < 9; i++)
    {
        if(tab[i / 3][i % 3] == '-') return 0;
    }
    return 1;
}

void table( char tab[3][3], int i, int *gabi, int *pai, char simbol1, char simbol2)
{
    
        for(int i = 0; i < 5; i++)
        {            
            int line1, column1, line2, column2;
            
            scanf("%d%d", &line1, &column1); 
            putSymbol(3,tab,'X',line1-1, column1-1);
            if(CheckWinner(3,tab) == 1)
            {
                *gabi += 1;
                printf("gabrielly  venceu essa partida\n");
                print_matrix(0,0,3,tab);
                printf("\n");
                break;
            }
                
            if(draw(tab))
            {
                printf("empate\n"); 
                print_matrix(0,0,3,tab);
                printf("\n");
                break;
            }

            scanf("%d%d", &line2, &column2);
            putSymbol(3,tab,'O',line2-1, column2-1);
            if(CheckWinner(3,tab) == 2)
            {
                *pai +=1;
                printf("pai venceu essa partida\n");
                print_matrix(0,0,3,tab);
                printf("\n");
                break;
            }
                
            if(draw(tab))
            {
                printf("draw\n"); 
                print_matrix(0,0,3,tab);
                printf("\n");
                break;
            }
        }
    }

int main() {
    char tab[3][3];
    int gabi = 0, pai = 0, op = 1;
     
    do{
        add_table(0,tab,'-');
        table(tab, 0, &gabi, &pai,'X', 'O');
        scanf("%d", &op);
    }while(op != 0);
    
   if(gabi == pai) printf("esse grande duelo terminou em empate\n");
   
   else printf("%s", (gabi > pai) ? "gabrielly foi a grande vencedora desse grande duelo"
                                : "pai foi a grande vencedora desse grande duelo");
   
	return 0;
}
