#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SOMA 0
//3731 - A bilbioteca de Dorian
//https://thehuxley.com/problem/3731

//funções para calculo e array
int recebendoValores (int codigos[], int posicoes[], int i) {
    scanf("%d %d", &codigos[i], &posicoes[i]);
    if (!codigos[i] && !posicoes[i]) return i - 1;
    recebendoValores(codigos, posicoes, i + 1);
}

int somaDoDenominador (int num, int soma) {
    if (num < 10) return soma + num;
    somaDoDenominador(num / 10, soma + (num % 10));
}

int primo(int n, int div){
    if(n < 2) return 0;
    if(div > sqrt(n)) return 1;
    if(n % div == 0) return 0;
    else primo(n, div+1); 
}

int proxPrimo(int n){
    if(primo(n, 2)) return n;
    else return proxPrimo(n+1);
}

int verificandoParidade (int num) {
    if (num == 0 || num == 1) return 2;
    else if (num % 2 == 0) num += 1;
    else num += 2;
    return proxPrimo(num);
}
 
int somaDoNumerador (int codigo) {
    return codigo + verificandoParidade(codigo);
}
int somadigito(int num, int soma){
    if(num==0)return soma;
    else soma += num%10;
    somadigito(num/10,soma);
}

int somaDosMultiplos (int nCodigo, int soma, int i) {
    if (i * 6 >= nCodigo) return soma;
    soma += (i * 6);
    somaDosMultiplos(nCodigo, soma, i + 1);
}

int somamultiplos( int codigos, int i, int soma)
{
    if(i == codigos) return soma;
    else if(i % 6 == 0) soma+= i;
    somamultiplos(codigos, i+1, soma);
}

int primeiro_numero(int codigos)
{
    codigos = (codigos + proxPrimo(codigos))/somadigito(codigos,0); return codigos;
}

int segundo_numero(int codigos, int posicoes)
{
    posicoes = fabs(somamultiplos(codigos,0,0) - posicoes); return posicoes;
}
//funções para novos valoroes
int novoCodigo (int codigo) {
    return somaDoNumerador(codigo)/somadigito(codigo,0);
}

int novaPosicao (int posicao, int codigo) {
    return somaDosMultiplos(codigo, SOMA, 1) - posicao;
}

void New_value (int codigos[], int posicoes[], int i) {
    if (i < 0) return;                      // i = indices usados

    posicoes[i] = fabs(novaPosicao(posicoes[i], codigos[i]));
    codigos[i] = novoCodigo(codigos[i]);
    New_value(codigos, posicoes, i - 1);
}

void Valores_anteriores (int valores[], int i, int j, int max) {
    if (j > max) return;

    if (valores[i] == valores[j]) {
        valores[j] += 1;
    }
    Valores_anteriores(valores, i, j + 1, max);
}

void valores_repetidos (int valores[], int i, int max) {
    if (i == max) return;
    Valores_anteriores(valores, i, i + 1, max);
    valores_repetidos(valores, i + 1, max);
}

void printandoNew_value (int codigos[], int posicoes[], int i) {
    if (i < 0) return;
    printf("%d - %d\n", codigos[i], posicoes[i]);
    printandoNew_value(codigos, posicoes, i - 1);
}

int main () {
    int codigos[1000], posicoes[1000], i = 0;
    i = recebendoValores(codigos, posicoes, i);

    New_value(codigos, posicoes, i);
    
    valores_repetidos(codigos, 0, i);
    valores_repetidos(posicoes, 0, i);

    printandoNew_value(codigos, posicoes, i);
    return 0;
}
//Parte do código usei as funções do meu grande amigo Caio César
