#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iso646.h>
#include<stdbool.h>

//2394 - Old Stack
//https://thehuxley.com/problem/2394

#define MAX 10
#define EMPTY -1

typedef struct Pilha{
    int topo;
    int vetor[10];
    
}Pilha;

int push (int value);
int pop (void);
int fullStack(void);
int emptyStack(void);
void printStack(void);

Pilha stack;

int main(){
   int opcao,valor;
   char code[12];
   strcpy(code, "value");
   stack.topo=-1;
  
    while(1){
        scanf("%s", code);
        if(not strcmp(code, "Empilhar")){
            scanf("%d\n", &valor);
            push(valor);
        }
        if(not strcmp(code, "Desempilhar")){
            pop();
        }
        if(not strcmp(code, "Fim")){
            exit(0);
        }
        printStack();
    }    
}   

int push (int value){
    stack.topo++;  
    stack.vetor[stack.topo] = value; 
    return stack.topo, stack.vetor[stack.topo];  
}
 
int pop (void){
    
    int auxvalor=stack.vetor[stack.topo];
    stack.topo--;
    return auxvalor;
} 


void printStack(void)
{
    for(int i = stack.topo; i > -1; i--)
        printf("%d%c", stack.vetor[i],(i) ? ' ' : '\n');
   
}
