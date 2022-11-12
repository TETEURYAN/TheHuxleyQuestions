#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int nmrAnderson, nmrGuilherme, nmrRita, nmrHigor, media;
    char letraAnderson, letraGuilherme, letraRita, letraHigor, perdedor[10];
    int valorA, valorB, valorC, valorD;
    int valorDaLetraAnderson, valorDaLetraGuilherme, valorDaLetraRita, valorDaLetraHigor;
    double fator, valorFinalAnderson, valorFinalGuilherme, valorFinalRita, valorFinalHigor;

    scanf ("%i %i %i %i", &nmrAnderson, &nmrGuilherme, &nmrRita, &nmrHigor);
    scanf (" %c %c %c %c", &letraAnderson, &letraGuilherme, &letraRita, &letraHigor);
    scanf ("%i %i %i %i", &valorA, &valorB, &valorC, &valorD);

    media = (nmrAnderson + nmrGuilherme + nmrRita + nmrHigor) / 4;

    if (media >= 0 && media <=10) {
        fator = 0.4;     
    }
    else if (media > 10 && media <= 30) {
        fator = 0.6;
    }
    else if (media > 30 && media <= 60) {
        fator = 0.8;
    }
    else if (media > 60) {
        fator = 1;
    }    
        // anderson
    if (letraAnderson == 'a') {
        valorDaLetraAnderson = valorA;               
    }
    else if (letraAnderson == 'b') {
        valorDaLetraAnderson = valorB;
    }
    else if (letraAnderson == 'c') {
        valorDaLetraAnderson = valorC;
    }
    else if (letraAnderson == 'd') {
        valorDaLetraAnderson = valorD;
    }  // guilherme
    if (letraGuilherme == 'a') {
        valorDaLetraGuilherme = valorA;               
    }
    else if (letraGuilherme == 'b') {
        valorDaLetraGuilherme = valorB;
    }
    else if (letraGuilherme == 'c') {
        valorDaLetraGuilherme = valorC;
    }
    else if (letraGuilherme == 'd') {
        valorDaLetraGuilherme = valorD;
    }   // rita
    if (letraRita == 'a') {
        valorDaLetraRita = valorA;               
    }
    else if (letraRita == 'b') {
        valorDaLetraRita = valorB;
    }
    else if (letraRita == 'c') {
        valorDaLetraRita = valorC;
    }
    else if (letraRita == 'd') {
        valorDaLetraRita = valorD;
    }    // higor
    if (letraHigor == 'a') {
        valorDaLetraHigor = valorA;               
    }
    else if (letraHigor == 'b') {
        valorDaLetraHigor = valorB;
    }
    else if (letraHigor == 'c') {
        valorDaLetraHigor = valorC;
    }
    else if (letraHigor == 'd') {
        valorDaLetraHigor = valorD;
    }        

    valorFinalAnderson = nmrAnderson + valorDaLetraAnderson + (valorDaLetraAnderson * fator);
    valorFinalGuilherme = nmrGuilherme + valorDaLetraGuilherme + (valorDaLetraGuilherme * fator);
    valorFinalHigor = nmrHigor + valorDaLetraHigor + (valorDaLetraHigor * fator);
    valorFinalRita= nmrRita + valorDaLetraRita + (valorDaLetraRita * fator);
    
    if (valorFinalAnderson < valorFinalGuilherme && valorFinalAnderson < valorFinalRita && valorFinalAnderson < valorFinalHigor) {
        strcpy (perdedor, "Anderson");
    }
    else if (valorFinalGuilherme < valorFinalAnderson && valorFinalGuilherme < valorFinalRita && valorFinalGuilherme < valorFinalHigor) {
        strcpy (perdedor, "Guilherme");
    }  
    else if (valorFinalRita < valorFinalAnderson && valorFinalRita < valorFinalGuilherme && valorFinalRita < valorFinalHigor) {
        strcpy (perdedor, "Rita");
    }
    else if (valorFinalHigor < valorFinalAnderson && valorFinalHigor < valorFinalGuilherme && valorFinalHigor < valorFinalRita) {
        strcpy (perdedor, "Higor");
    }

    printf ("%s quem vai pagar o lanche!:D", perdedor);

	return 0; 
}
