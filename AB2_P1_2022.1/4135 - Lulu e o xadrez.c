int main() {
    int pontuacao_pretas = 0, pontuacao_brancas = 0;
    
    for(int i = 0; i < 64; i++)
    {
        char peca, cor;
        scanf(" %c%c", &peca, &cor);
            
        if (cor == 'p')
        {
            if (peca == 'p') pontuacao_pretas += 1;
            if (peca == 'b') pontuacao_pretas += 3;
            if (peca == 'c') pontuacao_pretas += 3;
            if (peca == 't') pontuacao_pretas += 8;
            if (peca == 'd') pontuacao_pretas += 9;
            if (peca == 'r') pontuacao_pretas += 0;
        }
        else 
        {
            if (peca == 'p') pontuacao_brancas += 1;
            if (peca == 'b') pontuacao_brancas += 3;
            if (peca == 'c') pontuacao_brancas += 3;
            if (peca == 't') pontuacao_brancas += 8;
            if (peca == 'd') pontuacao_brancas += 9;
            if (peca == 'r') pontuacao_brancas += 0;
        }
    }
    
    if (pontuacao_brancas > pontuacao_pretas) printf("Brancas\n");
    else if (pontuacao_pretas > pontuacao_brancas) printf("Negras\n");
    else printf("Empate\n");
    
    return 0;
}