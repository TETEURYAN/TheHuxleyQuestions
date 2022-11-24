#include <stdio.h>

struct banco{
    int idade;
    char nome[51];
    char sexo;
    char civil;
    int qtdAmigos;
    int qtdFotos;
};

void ler(struct banco d[], int qtd, int i)
{
    if(i < qtd)
    {
    {
        scanf("%d", &d[i].idade);
        getchar();
        fgets(d[i].nome, 51, stdin);
        scanf(" %c", &d[i].sexo);
        scanf(" %c", &d[i].civil);
        scanf("%d %d", &d[i].qtdAmigos, &d[i].qtdFotos);
        ler(d,qtd,++i);
    }
    return;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    struct banco dados[num];
    ler(dados, num, 0);

    int i;
    for (i = 0; i < num; i++)
    {
        printf("Idade: %d\nNome: %sSexo: %c\n", dados[i].idade, dados[i].nome, dados[i].sexo);
        printf("Estado Civil: %c\nNumero de amigos: %d\nNumero de fotos: %d\n", dados[i].civil, dados[i].qtdAmigos, dados[i].qtdFotos);
        printf("\n");
    }

    return 0;    
}